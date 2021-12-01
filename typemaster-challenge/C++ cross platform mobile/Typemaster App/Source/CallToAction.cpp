/*
  ==============================================================================

    CallToAction.cpp
    Created: 12 Nov 2021 8:52:03pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "CallToAction.h"
#include "AppDefinitions.h"

CallToAction::CtaButton::CtaButton(): Button({})
{
}

void CallToAction::CtaButton::paintButton(Graphics & g, bool mouseOver, bool isDown)
{
    g.setColour(mouseOver ? AppDefinitions::getInstance()->ctaButtonBackgroundHover : AppDefinitions::getInstance()->ctaButtonBackground);
    //g.setColour(mouseOver ? AppDefinitions::getInstance()->ctaButtonBackground : AppDefinitions::getInstance()->ctaButtonBackgroundHover);
    g.fillRoundedRectangle(getLocalBounds().toFloat(), 8.0);
    
    g.setColour(AppDefinitions::getInstance()->white);
    g.drawText("PRE ORDER NOW", getLocalBounds(), Justification::centred);
}

void CallToAction::CtaButton::clicked()
{
    
};


CallToAction::CallToAction()
{ 
    addAndMakeVisible(ctaButton);
}

void CallToAction::paint(Graphics &g)
{
    //g.fillAll(Colours::orange);
    
    auto bounds = getLocalBounds().reduced(24, 0).withTrimmedTop(5);
    
    auto titleBounds = bounds.removeFromTop(96);
    g.setFont(Font(48, Font::FontStyleFlags::bold));
    g.setColour(AppDefinitions::getInstance()->title);
    g.drawFittedText(title, titleBounds, Justification::left, 10);
    bounds.removeFromTop(32);
    
    auto textBounds = bounds.removeFromTop(78);
    g.setFont(Font(16));
    g.setColour(AppDefinitions::getInstance()->text);
    g.drawFittedText(callToAction, textBounds, Justification::left, 10);
    bounds.removeFromTop(32);
    
    auto footerBounds = bounds.removeFromTop(48).withTrimmedLeft(150);
    g.drawFittedText(releaseDate, footerBounds, Justification::centred, 10);
}

void CallToAction::resized()
{
    ctaButton.setBounds(getLocalBounds().reduced(24, 0).withTrimmedTop(5).removeFromBottom(48).removeFromLeft(150));
}

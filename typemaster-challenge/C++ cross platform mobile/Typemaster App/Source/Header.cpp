/*
  ==============================================================================

    Header.cpp
    Created: 13 Nov 2021 10:09:44am
    Author:  Douglas Barr

  ==============================================================================
*/

#include "Header.h"
#include "AppDefinitions.h"

Header::HeaderButton::HeaderButton(): Button({})
{
}

void Header::HeaderButton::paintButton(Graphics & g, bool mouseOver, bool isDown)
{
    g.setColour(mouseOver ? AppDefinitions::getInstance()->buttonBackgroundHover : AppDefinitions::getInstance()->buttonBackground);
    g.fillRoundedRectangle(getLocalBounds().toFloat(), 8.0);
    
    g.setColour(AppDefinitions::getInstance()->buttonText);
    g.drawText("PRE ORDER NOW", getLocalBounds(), Justification::centred);
}

void Header::HeaderButton::clicked()
{
    
};

Header::Header()
{
    logo = Drawable::createFromImageData(BinaryData::logo_svg, BinaryData::logo_svgSize);
    
    addAndMakeVisible(ctaButton);
}

void Header::paint(Graphics& g)
{
    auto bounds = getLocalBounds().reduced(24, 0);
    bounds.setWidth(40);
    bounds = bounds.withSizeKeepingCentre(40, 40);
    logo->drawWithin(g, bounds.toFloat(), RectanglePlacement::Flags::centred, 1.0f);
}

void Header::resized()
{
    auto bounds = getLocalBounds().reduced(24, 0);
    ctaButton.setBounds(bounds.removeFromRight(122));
}

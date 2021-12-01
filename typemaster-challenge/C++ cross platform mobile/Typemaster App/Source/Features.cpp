/*
  ==============================================================================

    Features.cpp
    Created: 12 Nov 2021 8:52:54pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "Features.h"
#include "AppDefinitions.h"

void Features::Feature::paint(Graphics &g)
{
    auto bounds = getLocalBounds();
    
    auto iconBounds = bounds.removeFromTop(65).withSizeKeepingCentre(65, 65);
    g.setColour(AppDefinitions::getInstance()->highlight);
    g.fillRoundedRectangle(iconBounds.toFloat(), 16.0f);
    
    g.setColour(AppDefinitions::getInstance()->white);
    image->drawWithin(g, iconBounds.reduced(20.0, 20.0).toFloat(), RectanglePlacement::Flags::centred, 1.0f);
    
    bounds.removeFromTop(48);
    
    auto titleBounds = bounds.removeFromTop(56);
    g.setFont(Font(24, Font::FontStyleFlags::bold));
    g.setColour(AppDefinitions::getInstance()->title);
    g.drawFittedText(title, titleBounds, Justification::centred, 10);
    
    bounds.removeFromTop(24);
    
    g.setFont(Font(16));
    g.setColour(AppDefinitions::getInstance()->text);
    g.drawFittedText(text, bounds, Justification::centred, 10);
}

Features::Features()
{
    featureA.image = Drawable::createFromImageData(BinaryData::iconcompatible_svg, BinaryData::iconcompatible_svgSize);
    featureA.title = "HIGHLY\nCOMPATIBLE";
    featureA.text = "Easy to use and works well with all major computer brands, gaming consoles and mobile devices. Plug & play, no installation or driver needed.";

    addAndMakeVisible(featureA);
    
    featureB.image = Drawable::createFromImageData(BinaryData::iconbluetooth_svg, BinaryData::iconbluetooth_svgSize);
    featureB.title = "WIRELESS\nWITH BLUETOOTH";
    featureB.text = "Powerful 2.4G RF technology allows you to connect the cordless keyboard from up to 30ft away. Simply plug the unifying receiver into your computer.";

    addAndMakeVisible(featureB);
    
    featureC.image = Drawable::createFromImageData(BinaryData::iconbattery_svg, BinaryData::iconbattery_svgSize);
    featureC.title = "HIGH CAPACITY\nBATTERY";
    featureC.text = "Equipped with a long-lasting built-in battery, you'll never have to spend a dime on replaceable ones. Enjoy 40 hours of usage time between charges.";

    addAndMakeVisible(featureC);
    
    featureD.image = Drawable::createFromImageData(BinaryData::iconlight_svg, BinaryData::iconlight_svgSize);
    featureD.title = "RGB BACKLIT\nMODES";
    featureD.text = "Choose from 4 backlight brightness levels and adjustable breathing speed. Each key glows intensely in the dark and helps you type in low light conditions.";

    addAndMakeVisible(featureD);
}

void Features::paint(Graphics &g)
{
    auto bounds = getLocalBounds().reduced(24, 0);
    
    auto titleBounds = bounds.removeFromTop(108);
    g.setFont(Font(32, Font::FontStyleFlags::bold));
    g.setColour(AppDefinitions::getInstance()->title);
    g.drawFittedText(title, titleBounds, Justification::centred, 10);
    
    bounds.removeFromTop(24);
    
    g.setFont(Font(16));
    g.setColour(AppDefinitions::getInstance()->text);
    g.drawFittedText(text, bounds, Justification::centredTop, 10);
}

void Features::resized()
{
    auto bounds = getLocalBounds().reduced(24, 0);
    bounds.removeFromTop(347);
    
    featureA.setBounds(bounds.removeFromTop(297));
    bounds.removeFromTop(64);
    
    featureB.setBounds(bounds.removeFromTop(297));
    bounds.removeFromTop(64);
    
    featureC.setBounds(bounds.removeFromTop(297));
    bounds.removeFromTop(64);
    
    featureD.setBounds(bounds.removeFromTop(297));
}


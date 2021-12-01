/*
  ==============================================================================

    LandingPage.cpp
    Created: 12 Nov 2021 9:27:16pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "LandingPage.h"
#include "AppDefinitions.h"



LandingPage::LandingPage()
{
    addAndMakeVisible(header);
    addAndMakeVisible(callToAction);
    addAndMakeVisible(heroImage);
    addAndMakeVisible(featureImages);
    addAndMakeVisible(features);
    addAndMakeVisible(footer);
}

void LandingPage::paint (Graphics& g)
{
    g.fillAll(AppDefinitions::getInstance()->white);
}

void LandingPage::resized()
{
    auto bounds = getLocalBounds().withTrimmedTop(30).reduced(0, 23);
    
    header.setBounds(bounds.removeFromTop(48));
    bounds.removeFromTop(64);
    
    callToAction.setBounds(bounds.removeFromTop(286));
    bounds.removeFromTop(64);
    
    heroImage.setBounds(bounds.removeFromTop(331));
    bounds.removeFromTop(24);
    
    featureImages.setBounds(bounds.removeFromTop(193));
    bounds.removeFromTop(75);
    
    features.setBounds(bounds.removeFromTop(1823));
    
    footer.setBounds(bounds);
}


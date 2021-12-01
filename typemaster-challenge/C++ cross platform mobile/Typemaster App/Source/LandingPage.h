/*
  ==============================================================================

    LandingPage.h
    Created: 12 Nov 2021 9:27:16pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

#include "Header.h"
#include "CallToAction.h"
#include "FeatureImages.h"
#include "HeroImage.h"
#include "Features.h"
#include "Footer.h"

class LandingPage: public juce::Component
{
public:
    
    LandingPage();
    ~LandingPage() = default;
    
private:

    void paint (Graphics& g) override;
    void resized() override;
    
    Header header;
    CallToAction callToAction;
    HeroImage heroImage;
    FeatureImages featureImages;
    Features features;
    Footer footer;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LandingPage)
};

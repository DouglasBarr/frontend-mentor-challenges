/*
  ==============================================================================

    HeroImage.h
    Created: 12 Nov 2021 8:52:14pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class HeroImage: public Component
{
public:
    
    HeroImage();
    ~HeroImage() = default;
    
private:
    
    void paint (Graphics& g) override;
    
    Image heroImage;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (HeroImage)
};


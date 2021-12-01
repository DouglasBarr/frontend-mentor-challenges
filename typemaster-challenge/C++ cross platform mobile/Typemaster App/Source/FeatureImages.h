/*
  ==============================================================================

    FeatureImages.h
    Created: 12 Nov 2021 8:52:35pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class FeatureImages: public Component
{
public:
    
    FeatureImages();
    ~FeatureImages() = default;
    
private:
    
    void paint (Graphics& g) override;
    void resized() override;
    
    Image tintedImage;
    Image mainImage;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FeatureImages)
};


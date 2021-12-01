/*
  ==============================================================================

    Features.h
    Created: 12 Nov 2021 8:52:54pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class Features: public Component
{
public:
    
    class Feature: public Component
    {
    public:
        
        Feature() = default;
        ~Feature() = default;
        
        std::unique_ptr<Drawable> image;
        String title;
        String text;
        
    private:
        
        void paint (Graphics& g) override;

        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Feature)
    };
    
    Features();
    ~Features() = default;
    
private:
    
    void paint (Graphics& g) override;
    void resized() override;
    
    String title = "MECHANICAL\nWIRELESS\nKEYBOARD";
    String text = "The Typemaster keyboard boasts top-notch build and practical design. It offers a wide variety of switches and keycaps, along with reliable wireless connectivity.";

    Feature featureA;
    Feature featureB;
    Feature featureC;
    Feature featureD;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Features)
};


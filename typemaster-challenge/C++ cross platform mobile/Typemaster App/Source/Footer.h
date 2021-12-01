/*
  ==============================================================================

    Footer.h
    Created: 13 Nov 2021 10:09:49am
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class Footer: public Component
{
public:
    
    Footer() = default;
    ~Footer() = default;
    
    String text = "Typemaster 2021  |  All Rights Reserved";
    
private:
    
    void paint (Graphics& g) override;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Footer)
};

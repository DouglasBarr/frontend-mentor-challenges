/*
  ==============================================================================

    AppDefinitions.h
    Created: 12 Nov 2021 8:53:50pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class AppDefinitions
{
public:
    
    JUCE_DECLARE_SINGLETON(AppDefinitions, true)
    
    Colour title { 0xff162542 };
    Colour text { 0xff7b8bad };
    Colour highlight { 0xfff16718 };
    Colour white { 0xffffffff };
    
    Colour ctaButtonBackground { 0xfff16718 };
    Colour ctaButtonBackgroundHover { 0xffff9b62 };
    Colour ctaButtonText { 0xffffffff };

    Colour buttonBackground { 0xffe8eff2 };
    Colour buttonBackgroundHover { 0xff162542 };
    Colour buttonText { 0xff162542 };
    Colour buttonTextHover { 0xffffffff };
    
    
private:
    
    AppDefinitions() = default;
};

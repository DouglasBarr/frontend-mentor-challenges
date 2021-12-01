/*
  ==============================================================================

    AppLookAndFeel.h
    Created: 12 Nov 2021 8:53:30pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "AppDefinitions.h"

class AppLookAndFeel : public LookAndFeel_V4
{
public:
    
    AppLookAndFeel();
    
    Typeface::Ptr getTypefaceForFont(const Font& font) override;
    
    Typeface::Ptr barlowBlack;
    Typeface::Ptr barlow;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AppLookAndFeel)
};

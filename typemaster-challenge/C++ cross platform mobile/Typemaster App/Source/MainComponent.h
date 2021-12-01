#pragma once

#include <JuceHeader.h>
#include "AppLookAndFeel.h"

class LandingPage;

class MainComponent  : public juce::Component 
{
public:
    
    //==============================================================================
    MainComponent();
    ~MainComponent() override;

    //==============================================================================
    void resized() override;

private:

    AppLookAndFeel appLookAndFeel;
    
    Viewport viewport;
    std::unique_ptr<LandingPage> landingPage;
        
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

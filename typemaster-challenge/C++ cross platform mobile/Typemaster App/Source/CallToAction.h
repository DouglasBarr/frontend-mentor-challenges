/*
  ==============================================================================

    CallToAction.h
    Created: 12 Nov 2021 8:52:03pm
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class CallToAction: public Component
{
public:
    
    class CtaButton: public Button
    {
    public:
        CtaButton();
        void paintButton(Graphics & g, bool mouseOver, bool isDown) override;
        void clicked() override;
    };
    
    CallToAction();
    ~CallToAction() = default;
    
private:
    
    void paint (Graphics& g) override;
    void resized() override;
        
    CtaButton ctaButton;
    String title { "TYPEMASTER\nKEYBOARD" };
    String callToAction { "Improve your productivity and gaming without breaking the bank. Upgrade to a high quality mechanical typing experience." };
    String releaseDate { "RELEASE ON 5/27" };
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CallToAction)
};

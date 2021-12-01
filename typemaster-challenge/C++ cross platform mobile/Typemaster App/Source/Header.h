/*
  ==============================================================================

    Header.h
    Created: 13 Nov 2021 10:09:44am
    Author:  Douglas Barr

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class Header: public Component
{
public:
    
    class HeaderButton: public Button
    {
    public:
        HeaderButton();
        void paintButton(Graphics & g, bool mouseOver, bool isDown) override;
        void clicked() override;
    };
    
    Header();
    ~Header() = default;
    
private:
    
    void paint (Graphics& g) override;
    void resized() override;
    
    std::unique_ptr<Drawable> logo;
    HeaderButton ctaButton;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Header)
};

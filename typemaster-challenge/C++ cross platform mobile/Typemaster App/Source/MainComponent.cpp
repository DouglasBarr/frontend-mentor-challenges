#include "MainComponent.h"
#include "LandingPage.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    
    landingPage = std::make_unique<LandingPage>();
    
    addAndMakeVisible(viewport);
    viewport.setViewedComponent(landingPage.get());
    viewport.setScrollBarsShown(false, false);
}

MainComponent::~MainComponent()
{
}

void MainComponent::resized()
{
    auto bounds = getLocalBounds();
    viewport.setBounds(bounds);
    
    if (landingPage)
        landingPage->setBounds(bounds.withHeight(3037));
}

/*
  ==============================================================================

    FeatureImages.cpp
    Created: 12 Nov 2021 8:52:35pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "FeatureImages.h"
#include "AppDefinitions.h"

FeatureImages::FeatureImages()
{
    tintedImage = ImageFileFormat::loadFrom(File("/Users/doug/Dev/Personal/frontend-mentor-challenges/typemaster-challenge/typemaster-pre-launch-landing-page/starter-code/assets/mobile/image-phone-and-keyboard.jpg"));
    mainImage = ImageFileFormat::loadFrom(File("/Users/doug/Dev/Personal/frontend-mentor-challenges/typemaster-challenge/typemaster-pre-launch-landing-page/starter-code/assets/mobile/image-glass-and-keyboard.jpg"));
}

void FeatureImages::paint(Graphics &g)
{
    auto bounds = getLocalBounds().withTrimmedRight(24);
    
    auto tintedImageBounds = bounds.withWidth(129).translated(-22, 0);
    auto mainImageBounds = bounds.removeFromRight(220);
    
    {
        g.saveState();
    
        Path clipBounds;
        clipBounds.addRoundedRectangle(tintedImageBounds.getX(), tintedImageBounds.getY(),
                                       tintedImageBounds.getWidth(), tintedImageBounds.getHeight(),
                                       20.0f, 20.0f, false, true, false, true);
            
        g.reduceClipRegion(clipBounds);
        g.drawImage(tintedImage, tintedImageBounds.toFloat());
        
        g.setColour(AppDefinitions::getInstance()->highlight.withAlpha(0.85f));
        g.fillRect(tintedImageBounds);
        g.restoreState();
    }
    
    {
        g.saveState();
    
        Path clipBounds;
        clipBounds.addRoundedRectangle(mainImageBounds.getX(), mainImageBounds.getY(),
                                       mainImageBounds.getWidth(), mainImageBounds.getHeight(),
                                       20.0f, 20.0f, true, true, true, true);
            
        g.reduceClipRegion(clipBounds);
        g.drawImage(mainImage, mainImageBounds.toFloat());
        g.restoreState();
    }
}

void FeatureImages::resized()
{
    
}


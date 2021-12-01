/*
  ==============================================================================

    HeroImage.cpp
    Created: 12 Nov 2021 8:52:14pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "HeroImage.h"

HeroImage::HeroImage()
{
    heroImage = ImageFileFormat::loadFrom(File("/Users/doug/Dev/Personal/frontend-mentor-challenges/typemaster-challenge/typemaster-pre-launch-landing-page/starter-code/assets/mobile/image-keyboard.jpg"));
}

void HeroImage::paint(Graphics &g)
{
    auto bounds = getLocalBounds().withTrimmedLeft(24);
    
    Path clipBounds;
    clipBounds.addRoundedRectangle(bounds.getX(), bounds.getY(), bounds.getWidth(), bounds.getHeight(), 20.0f, 20.0f, true, false, true, false);
        
    g.reduceClipRegion(clipBounds);
    g.drawImage(heroImage, bounds.toFloat());
}

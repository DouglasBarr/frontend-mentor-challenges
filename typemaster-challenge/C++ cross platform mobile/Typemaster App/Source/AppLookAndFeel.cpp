/*
  ==============================================================================

    AppLookAndFeel.cpp
    Created: 12 Nov 2021 8:53:30pm
    Author:  Douglas Barr

  ==============================================================================
*/

#include "AppLookAndFeel.h"

AppLookAndFeel::AppLookAndFeel()
:
barlowBlack(Typeface::createSystemTypefaceFor(BinaryData::BarlowBlack_otf, BinaryData::BarlowBlack_otfSize)),
barlow(Typeface::createSystemTypefaceFor(BinaryData::BarlowMedium_otf, BinaryData::BarlowMedium_otfSize))
{
    LookAndFeel::setDefaultLookAndFeel (this);
}

Typeface::Ptr AppLookAndFeel::getTypefaceForFont(const Font& font)
{
    return font.isBold() ? barlowBlack : barlow;
}

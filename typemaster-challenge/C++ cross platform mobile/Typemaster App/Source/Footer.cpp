/*
  ==============================================================================

    Footer.cpp
    Created: 13 Nov 2021 10:09:49am
    Author:  Douglas Barr

  ==============================================================================
*/

#include "Footer.h"
#include "AppDefinitions.h"

void Footer::paint(Graphics &g)
{
    g.setFont(Font(16));
    g.setColour(AppDefinitions::getInstance()->text);
    g.drawFittedText(text, getLocalBounds(), Justification::centred, 1);
}

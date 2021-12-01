/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   iconbattery_svg;
    const int            iconbattery_svgSize = 535;

    extern const char*   iconbluetooth_svg;
    const int            iconbluetooth_svgSize = 551;

    extern const char*   iconcompatible_svg;
    const int            iconcompatible_svgSize = 284;

    extern const char*   iconlight_svg;
    const int            iconlight_svgSize = 1097;

    extern const char*   logo_svg;
    const int            logo_svgSize = 849;

    extern const char*   patternsquare_svg;
    const int            patternsquare_svgSize = 146;

    extern const char*   BarlowBlack_otf;
    const int            BarlowBlack_otfSize = 62624;

    extern const char*   BarlowMedium_otf;
    const int            BarlowMedium_otfSize = 59304;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 8;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}

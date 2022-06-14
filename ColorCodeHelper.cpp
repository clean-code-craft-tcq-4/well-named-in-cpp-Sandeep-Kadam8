#include "ColorCodeHelper.h"
#include "ColorPair.h"
#include <iostream>


namespace TelCoColorCoder {

ColorPair GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor =
        (MajorColor)(zeroBasedPairNumber / MINOR_COLOR_SIZE);
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % MINOR_COLOR_SIZE);
    return ColorPair(majorColor, minorColor);
}

int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * MINOR_COLOR_SIZE + minor + 1;
}

void PrintColorCodeManual() {
    for(int index = 1; index <= 25; ++index) {
        std::cout << index << " -> " << GetColorFromPairNumber(index).ToString() << "\n";
    }
}

} /* namespace TelCoColorCoder */

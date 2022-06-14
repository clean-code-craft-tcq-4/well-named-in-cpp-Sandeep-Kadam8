#ifndef COLORCODEHELPER_H_
#define COLORCODEHELPER_H_


namespace TelCoColorCoder {
class ColorPair;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET, MAJOR_COLOR_SIZE};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE, MINOR_COLOR_SIZE};

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);
void PrintColorCodeManual();

} /* namespace TelCoColorCoder */

#endif /* COLORCODEHELPER_H_ */

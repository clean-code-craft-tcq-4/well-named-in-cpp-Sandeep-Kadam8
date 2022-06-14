#ifndef COLORPAIR_H_
#define COLORPAIR_H_

#include <string>
#include "ColorCodeHelper.h"

namespace TelCoColorCoder
{

class ColorPair {
 public:
    ColorPair(MajorColor major, MinorColor minor);

    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();
 private:
     MajorColor majorColor;
     MinorColor minorColor;
};

} // namespace TelCoColorCoder
#endif /* COLORPAIR_H_ */

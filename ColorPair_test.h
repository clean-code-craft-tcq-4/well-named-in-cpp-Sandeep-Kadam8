/*
 * ColorPair_test.h
 *
 */

#ifndef COLORPAIR_TEST_H_
#define COLORPAIR_TEST_H_

#include "ColorPair.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor);

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber);

#endif /* COLORPAIR_TEST_H_ */

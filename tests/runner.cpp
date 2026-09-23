/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_NoughtsCrossesTest_init = false;
#include "NoughtsCrossesTest.h"

static NoughtsCrossesTest suite_NoughtsCrossesTest;

static CxxTest::List Tests_NoughtsCrossesTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NoughtsCrossesTest( "tests/NoughtsCrossesTest.h", 6, "NoughtsCrossesTest", suite_NoughtsCrossesTest, Tests_NoughtsCrossesTest );

static class TestDescription_suite_NoughtsCrossesTest_testNewBoardStartsEmpty : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testNewBoardStartsEmpty() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 9, "testNewBoardStartsEmpty" ) {}
 void runTest() { suite_NoughtsCrossesTest.testNewBoardStartsEmpty(); }
} testDescription_suite_NoughtsCrossesTest_testNewBoardStartsEmpty;

static class TestDescription_suite_NoughtsCrossesTest_testRejectsInvalidAndOccupiedMoves : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testRejectsInvalidAndOccupiedMoves() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 18, "testRejectsInvalidAndOccupiedMoves" ) {}
 void runTest() { suite_NoughtsCrossesTest.testRejectsInvalidAndOccupiedMoves(); }
} testDescription_suite_NoughtsCrossesTest_testRejectsInvalidAndOccupiedMoves;

static class TestDescription_suite_NoughtsCrossesTest_testDetectsRowColumnAndDiagonalWinners : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testDetectsRowColumnAndDiagonalWinners() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 30, "testDetectsRowColumnAndDiagonalWinners" ) {}
 void runTest() { suite_NoughtsCrossesTest.testDetectsRowColumnAndDiagonalWinners(); }
} testDescription_suite_NoughtsCrossesTest_testDetectsRowColumnAndDiagonalWinners;

static class TestDescription_suite_NoughtsCrossesTest_testDetectsDrawnFullBoard : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testDetectsDrawnFullBoard() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 47, "testDetectsDrawnFullBoard" ) {}
 void runTest() { suite_NoughtsCrossesTest.testDetectsDrawnFullBoard(); }
} testDescription_suite_NoughtsCrossesTest_testDetectsDrawnFullBoard;

static class TestDescription_suite_NoughtsCrossesTest_testComputerTakesWinningMove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testComputerTakesWinningMove() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 58, "testComputerTakesWinningMove" ) {}
 void runTest() { suite_NoughtsCrossesTest.testComputerTakesWinningMove(); }
} testDescription_suite_NoughtsCrossesTest_testComputerTakesWinningMove;

static class TestDescription_suite_NoughtsCrossesTest_testComputerBlocksHumanWinningMove : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testComputerBlocksHumanWinningMove() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 67, "testComputerBlocksHumanWinningMove" ) {}
 void runTest() { suite_NoughtsCrossesTest.testComputerBlocksHumanWinningMove(); }
} testDescription_suite_NoughtsCrossesTest_testComputerBlocksHumanWinningMove;

static class TestDescription_suite_NoughtsCrossesTest_testComputerPrefersCenterThenFirstAvailableSquare : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NoughtsCrossesTest_testComputerPrefersCenterThenFirstAvailableSquare() : CxxTest::RealTestDescription( Tests_NoughtsCrossesTest, suiteDescription_NoughtsCrossesTest, 76, "testComputerPrefersCenterThenFirstAvailableSquare" ) {}
 void runTest() { suite_NoughtsCrossesTest.testComputerPrefersCenterThenFirstAvailableSquare(); }
} testDescription_suite_NoughtsCrossesTest_testComputerPrefersCenterThenFirstAvailableSquare;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";

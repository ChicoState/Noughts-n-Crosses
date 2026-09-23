#include <cxxtest/TestSuite.h>

#define NOUGHTS_AND_CROSSES_TEST
#include "../main.cpp"

class NoughtsCrossesTest : public CxxTest::TestSuite
{
public:
    void testNewBoardStartsEmpty()
    {
        Board board = createBoard();

        for (char cell : board) {
            TS_ASSERT_EQUALS(cell, EmptyCell);
        }
    }

    void testRejectsInvalidAndOccupiedMoves()
    {
        Board board = createBoard();

        TS_ASSERT(!isMoveValid(board, 0));
        TS_ASSERT(!isMoveValid(board, 10));
        TS_ASSERT(makeMove(board, 5, HumanMarker));
        TS_ASSERT(!isMoveValid(board, 5));
        TS_ASSERT(!makeMove(board, 5, ComputerMarker));
        TS_ASSERT_EQUALS(board[4], HumanMarker);
    }

    void testDetectsRowColumnAndDiagonalWinners()
    {
        Board rowWin = {HumanMarker, HumanMarker, HumanMarker,
                        EmptyCell, EmptyCell, EmptyCell,
                        EmptyCell, EmptyCell, EmptyCell};
        Board columnWin = {ComputerMarker, EmptyCell, EmptyCell,
                           ComputerMarker, EmptyCell, EmptyCell,
                           ComputerMarker, EmptyCell, EmptyCell};
        Board diagonalWin = {HumanMarker, EmptyCell, EmptyCell,
                             EmptyCell, HumanMarker, EmptyCell,
                             EmptyCell, EmptyCell, HumanMarker};

        TS_ASSERT_EQUALS(winner(rowWin), HumanMarker);
        TS_ASSERT_EQUALS(winner(columnWin), ComputerMarker);
        TS_ASSERT_EQUALS(winner(diagonalWin), HumanMarker);
    }

    void testDetectsDrawnFullBoard()
    {
        Board board = {HumanMarker, ComputerMarker, HumanMarker,
                       HumanMarker, ComputerMarker, ComputerMarker,
                       ComputerMarker, HumanMarker, HumanMarker};

        TS_ASSERT_EQUALS(winner(board), EmptyCell);
        TS_ASSERT(isBoardFull(board));
        TS_ASSERT(isGameOver(board));
    }

    void testComputerTakesWinningMove()
    {
        Board board = {ComputerMarker, ComputerMarker, EmptyCell,
                       HumanMarker, HumanMarker, EmptyCell,
                       EmptyCell, EmptyCell, EmptyCell};

        TS_ASSERT_EQUALS(chooseComputerMove(board), 3);
    }

    void testComputerBlocksHumanWinningMove()
    {
        Board board = {HumanMarker, HumanMarker, EmptyCell,
                       ComputerMarker, EmptyCell, EmptyCell,
                       EmptyCell, EmptyCell, EmptyCell};

        TS_ASSERT_EQUALS(chooseComputerMove(board), 3);
    }

    void testComputerPrefersCenterThenFirstAvailableSquare()
    {
        Board emptyBoard = createBoard();
        TS_ASSERT_EQUALS(chooseComputerMove(emptyBoard), 5);

        Board board = {HumanMarker, ComputerMarker, HumanMarker,
                       ComputerMarker, HumanMarker, ComputerMarker,
                       EmptyCell, EmptyCell, EmptyCell};

        TS_ASSERT_EQUALS(chooseComputerMove(board), 7);
    }
};

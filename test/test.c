#include <cstdlib>
#include <ctest.h>
#include <lib/lib.h>

char board[10][10]
        = {"8rnbqkbnr",
           "7pppppppp",
           "6........",
           "5........",
           "4........",
           "3........",
           "2PPPPPPPP",
           "1RNBQKBNR",
           " abcdefgh"};

int step_integer[6] = {1, 1, 0, 1, 3};

CTEST(read_figures, BlackHorse)
{
    step_integer[0] = 2;
    step_integer[1] = 0;
    step_integer[3] = 3;
    step_integer[4] = 2;
    ASSERT_EQUAL(0, BlackHorseMove(step_integer, board));
}

CTEST(read_figures, WhiteBishop)
{
    step_integer[0] = 3;
    step_integer[1] = 7;
    step_integer[3] = 5;
    step_integer[4] = 5;
    ASSERT_EQUAL(1, BlackHorseMove(step_integer, board));
}

CTEST(read_figures, BlackPawn)
{
    ASSERT_EQUAL(1, BlackPawnMove(step_integer, board));
}

CTEST(read_figures, WhitePawn)
{
    step_integer[0] = 1;
    step_integer[1] = 6;
    step_integer[3] = 1;
    step_integer[4] = 5;
    ASSERT_EQUAL(0, WhitePawnMove(step_integer, board));
}

CTEST(read_figures, WhiteHorse)
{
    step_integer[0] = 2;
    step_integer[1] = 7;
    step_integer[3] = 3;
    step_integer[4] = 5;
    ASSERT_EQUAL(0, WhiteHorseMove(step_integer, board));
}

CTEST(Input, InputValidation)
{
    char inp[6] = "e2-e4";
    ASSERT_EQUAL(0, InputValidation(inp));
}

CTEST(Input, InputInvalidation)
{
    char inp[6] = "e2-e1";
    ASSERT_EQUAL(0, InputValidation(inp));
}

CTEST(Input, InputValidation2)
{
    char inp[6] = "a2-e3";
    ASSERT_EQUAL(0, InputValidation(inp));
}

CTEST(Input, InputInvalidation2)
{
    char inp[6] = "h2-h4";
    ASSERT_EQUAL(0, InputValidation(inp));
}
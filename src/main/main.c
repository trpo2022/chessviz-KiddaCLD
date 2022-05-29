#include "../lib/lib.h"

#include <iostream>

using namespace std;

int main()
{
    char board[9][9]
            = {"8rnbqkbnr",
               "7pppppppp",
               "6........",
               "5........",
               "4........",
               "3........",
               "2PPPPPPPP",
               "1RNBQKBNR",
               " abcdefgh"};
    int MoveNumber = 1;
    int j = 1;
    conclusion(board);
}
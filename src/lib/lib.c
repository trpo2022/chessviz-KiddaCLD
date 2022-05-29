#include <lib/lib.h>

#include <iostream>
#include <stdlib.h>

using namespace std;


void conclusion(char board[9][9])
{
    cout <<"\n";
    int x = 0, y = 0;
    for (y = 0; y < 9; y++) {
        for (x = 0; x < 9; x++) {
            cout <<"%c ", board[y][x];
            if (x == 0) {
                cout <<" ";
            }
        }
        cout <<"\n";
        if (y == 7) {
            cout <<"\n";
        }
    }
}


#pragma once

void conclusion(char board[10][10]);
int BlackPawnMove(int* step_integer, char mass[10][10]);
int WhitePawnMove(int* step_integer, char mass[10][10]);
int WhiteKingMove(int* step_integer, char mass[10][10]);
int BlackKingMove(int* step_integer, char mass[10][10]);
int WhiteRookMove(int* step_integer, char mass[10][10]);
int BlackRookMove(int* step_integer, char mass[10][10]);
int WhiteBishopMove(int* step_integer, char mass[10][10]);
int BlackBishopMove(int* step_integer, char mass[10][10]);
void WhiteQueenMove(int* step_integer, char mass[10][10]);
void BlackQueenMove(int* step_integer, char mass[10][10]);
int WhiteHorseMove(int* step_integer, char mass[10][10]);
int BlackHorseMove(int* step_integer, char mass[10][10]);
int InputValidation(char* step);
void WhiteTurn(char mass[10][10]);
void BlackTurn(char mass[10][10]);
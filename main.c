#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

char board[8][8];
char black[8],white[8];
int xt=0,yt=0,x=0,y=0,x2=0,y2=0;
char t_temp;

void fill_board()
{
	black[0]='R'; white[0]='r';
	black[1]='N'; white[1]='n';
	black[2]='B'; white[2]='b';
	black[3]='Q'; white[3]='q';
	black[4]='K'; white[4]='k';
	black[5]='B'; white[5]='b';
	black[6]='N'; white[6]='n';
	black[7]='R'; white[7]='r';
	
	for (int y = 0; y <= 7; y++)
	{
		for (int x = 0; x <= 7; x++)
		{
			if (y == 0)
			{
				board[y][x] = white[x]; 
				board[y + 1][x] = 'p';
			}
			else if(y > 1 && y < 6){
				board[y][x] = ' ';
			}
			if (y == 6){
				board[y][x] = 'P';
				board[y + 1][x] = black[x];
			}

			
		}
	}
}

void print_board()
{
	for (int y = 0; y < 8; y++)
	{
		printf("%d|", y+1);
		for (int x = 0; x < 8; x++)
		{
			printf(" %c",board[y][x]);
		}
		printf("\n");
	}
	printf(" -----------------\n");
	printf("   a b c d e f g h");
	printf("\n");
}

int main(){
	fill_board();
	print_board();
	
return 0;	
}
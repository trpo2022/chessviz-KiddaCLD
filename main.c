#include <stdio.h>

char board[8][8];

void fill_board()
{
	char black[8],white[8];
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
			if (y == 6){
				board[y][x] = 'P';
				board[y+1][x] = black[x];
			}
			
		}
	}
}

void print_board()
{
	for (int y = 0; y < 8; y++)
	{
		printf("%d|", 8 - y);
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

int main(void)
{
	 
	fill_board();
	print_board();
		
}
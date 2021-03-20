#include <stdio.h>
#include <stdlib.h>
// leftPyramid.c 

void startLine(int ch)
{
		for (int i=0; i< ch; i++)
		{
				putchar('*');
		}
		putchar('\n');
}

void startBlock(int r, int col)
{
		for ( int i = 0; i < r ; i++)
		{
				startLine(col);
		}
}

void pyramid( int blocks )
{
		int b = 0;

		for ( b = 1; b <= blocks; b++ )
		{
				startBlock(b, 2*b-1);
		}
}

int main()
{
		pyramid(5);
		return 0;
}

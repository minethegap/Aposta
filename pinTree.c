# include <stdio.h>
# include <stdlib.h>

/* Printing a pinTree N tiers */
void center(char left, char cent, char right, int count, int length)
{
		int blank = ( length - count ) / 2;
	    int wing = count / 2 ;	
		for(int i = 0 ; i<blank ; i++) putchar(' ');
		for(int i = 0 ; i<wing ; i++) putchar(left);
		putchar(cent);
		for(int i = 0 ; i < wing ; i++) putchar(right);	
		putchar('\n');
}

void shaggyTruncTriangle(char left, char cent, char right, int base, int top, int length)
{
		int count;

		for(int i = top; i<base; i+=2)
		{
				count = i ; 		
				center(left, cent, right, count, length);
		}
}

void pinTree( int tiers )
{

		int line = tiers * 2 + 1 ;
		int j ;
		shaggyTruncTriangle('/', '|', '\\', 3, 1, line);

		for ( j = 3; j<=tiers; j++ )
		{
				int base = 2 * tiers + 1 ;
				int top = (j-1)*2 - 1 ;

				shaggyTruncTriangle('/', '|', '\\', base, top, line);
		}

		for ( j = 0; j<3; j++ )
		{
				center('|', '|', '|', 3, line);
		}
}

int main(int argc, char *argv[])
{
		pinTree(8);
 return 0;
}


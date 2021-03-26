# include <stdio.h>
# include <stdlib.h>

/* print shaggy truncated triangle */

void center(left, cent, right, blank, count, wing, length)
{
		for(int i = 0; i<blank; i++) printf(" ");
		for(int i = 0; i<wing; i++) printf("%c", left);
		printf("%c", cent);
		for(int i = 0; i<wing; i++) printf("%c", right);
}

void shaggyTruncTriangle(char left, char cent, char right, int base, int top, int length)
{
		int blank ;
		int count ; 
		int wing ; 

		for (int i=top; i<base; i+=2)
		{
				blank = ( length - i ) / 2 ;
				wing = i / 2 ; 
				count = i ;

				center(left, cent, right, blank, count, wing, length);
				
				printf("\n");
		}
}

int main(int argc, char *argv[])
{
		shaggyTruncTriangle('/', '|', '\\', 17, 7, 27);
 return 0;
}


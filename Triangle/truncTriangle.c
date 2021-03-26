# include <stdio.h>
# include <stdlib.h>

/* printed centered truncated triangle */

void center(char ch, int count, int length)
{
		int blank = ( length - count ) / 2 ;
		for(int i = 0; i<blank; i++) printf(" ");
		for(int i = 0; i<count; i++) printf("%c", ch);
}

void truncTriangle(char ch, int base, int top, int length)
{
		for ( int i = top; i<=base; i+=2 )
		{
				center(ch, i, length);
				printf("\n");
		}
}
int main(int argc, char *argv[])
{
		truncTriangle('*', 9, 3, 17);
		printf("\n");

		truncTriangle('x', 13, 5, 23);
		printf("\n");

		truncTriangle('_', 17, 7, 31);
		printf("\n");
 return 0;
}


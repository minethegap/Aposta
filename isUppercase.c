# include <stdio.h>
# include <stdlib.h>

/* write a function to detector the characters isUpper case? */

int isUppercase ( int ch )
{
	return ch >='A' && ch <= 'Z' ;
}

int main(int argc, char *argv[] )
{
	char trials[] = {'a', 'B', 'Z', ' ', '+', 'z', 'Z', 0x33 };
	int j, ch;

	for ( j=0; j<sizeof(trials); j++ )
	{
		ch = trials[j];

		if (isUppercase(ch) )
			printf("%c is upper case\n", ch );
		else
			printf("%c is NOT upper case\n", ch);	
	}

	return 0;
}	

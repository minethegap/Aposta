# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/* Generation random characters 'a' .. 'z' */
const int min = 65, max = 97;

void randChar(int min, int max)
{
	int r ;
	
	r = (max - min ) * rand() / RAND_MAX + 1 + min ; 
	printf("%d" , r);
}	

int main(int argc, char *argv[])
{
		srand( time(NULL) );
		char c;

		randChar(min, max);
 return 0;
}


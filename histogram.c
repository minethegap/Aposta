# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int limit = 1000000000;
int main(int argc, char *argv[])
{
		int j;
		int r, count;
		int histo[] = { 0,0,0,0,0,0,0,0,0,0};

		srand( time(NULL) );
		for ( j=0; j < limit; j++ )
		{
				r = rand() % 10 ;
				histo[r]++ ;
		}
		for ( j=0; j < 10; j++ )
		{
				printf("%3d: %10d\n", j, histo[j]);
		}
		printf("\n");

 return 0;
}


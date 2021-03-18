#include <stdio.h>
#include <stdlib.h>
/* Generation random numbers d in the range 0.0 <= d < 1.0 */

const int limit = 100;

double randDouble()
{
	return (double)rand() / ((double)RAND_MAX + 1) ;
}

int main(int argc, char *argv[])
{
		double r;
	   	int	count = 0;

		for(int i=0; i<limit; i++)
		{
				r = randDouble();
				printf("%1.10f ", r);

				if(count++%5 == 4) printf("\n");
		}

 printf("\n");
 return 0;
}


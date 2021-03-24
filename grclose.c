# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <time.h>

/* Generation N random doubles in range 0.0 < 100 and print out value closest to 50.0 */
const int limit = 1000 ;
const double min = 0.0, max = 100.0;
const double targets = 50.0;

double randomDoubleRange(double min, double max)
{

		return (max - min ) * ((double)rand() / ((double)RAND_MAX + 1)) + min;

}

int main(int argc, char *argv[])
{
		srand( time(NULL) ); 
		double r, f ; 
		double mindifference = max ;
		double clostest ; 
		int count = 0;

		for(int i = 0; i<limit; i++)
		{
				r = randomDoubleRange(min, max);
				
				if( (f = fabs(targets - r)) < mindifference ) 
				{
					mindifference = f ;
					clostest = r ; 
				}
		}
		printf("clostest: %1f, mindifference: %1f\n", clostest, mindifference);

 return 0;
}


# include <stdio.h>
# include <stdlib.h>

/* Generate random double precious floating point value d in the range of min <= d < max */
const int limit = 100 ;
const double min = 5.0 ;
const double max = 10.0 ; 

double randDoubleRange(double min, double max)
{
		return (double) rand() / (double) RAND_MAX * ( max - min ) + min ;
}

int main(int argc, char *argv[])
{
		double r;
		int count = 0;

		for ( int i=0; i<limit; i++ )
		{
				r =	randDoubleRange(min, max);
				printf("%3.10f ", r);

				if(count++ % 5 == 4) printf("\n");
		}
		printf("\n");

 return 0;
}


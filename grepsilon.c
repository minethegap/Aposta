# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <math.h>

/* Generation random doubles in range 0.0 <= d < 100.0 that is within small value £ of 50.0 */

const int limit = 10000000;
const double MIN = 0.0, MAX = 100.0;
const double TARGET = 50.0;
const double ESPILON = 1.0e-2;

double randomDoubleRange(double min, double max)
{
		return ( max - min ) * ((double) rand()/((double)RAND_MAX + 1 )) + min; 
}

int main(int argc, char *argv[])
{
		srand( time(NULL) );
		int trial = 0  ;
		double r, f;

		printf("Target: %f;\tEpsilon: %f\n", TARGET, ESPILON);

		r = randomDoubleRange(MIN, MAX);
		while ( fabs( r - TARGET ) >= ESPILON && trial < limit )
		{
			r = randomDoubleRange(MIN, MAX);
			trial ++ ; 
		}	
		
		if ( trial  != limit ) 
				printf("Closest value: %f;\toccurred on trial : %d\n", r , trial);
		else 
				printf(" No number within limit in %d trials\n", limit );

 return 0;
}


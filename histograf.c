# include <stdio.h>
# include <stdlib.h>
# include <time.h>

const int limit = 500;
const int maxPlus = 10;

int histo[] = {0,0,0,0,0,0,0,0,0,0};

/* Generate the random numbers and histogram them. */
void generate() 
{
		int r, j;

		for( j=0; j<limit; j++)
		{
				r = rand() % maxPlus;
				histo[r]++;
		}
}	

/* plot the histogram */
void plot(int max)
{
		const int barwidth = 50 ; 
		int i, s;
		
		for( i=0; i<maxPlus; i++)
		{
				printf("%3d (%5d):",i, histo[i]);
				for(s=0; s<histo[i]*barwidth/max; s++)
						printf("*");
			printf("\n");
		}
}

/* Find the maxiumum of all the histogram bins */
int findMax()
{
		int max = histo[0];
		for(int i=0; i<maxPlus; i++) 
		{ 
				if(histo[i] > max) 
				{	
						max=histo[i];
				}
			};
		return max;
}

int main(int argc, char *argv[])
{
		srand( time(NULL) );
		generate();
		int max = findMax();
		plot( max );
 return 0;
}


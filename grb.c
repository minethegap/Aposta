# include <stdio.h>
# include <stdlib.h>

/* Generation random numbers between min .. max */
const int limit = 1000;
const int min = 50;
const int max = 100;

int readInt(int min, int max)
{
		return random() % ( max - min + 1 ) + min;
}
int main(int argc, char *argv[])
{
		int r, count=0;
		for(int i=0; i<limit; i++)
		{
				r = readInt(min, max);

				if( r>=max || r<=min)
				{
						printf("%4d*", r);
				}  else {
						printf("%4d", r);
				}
				if(count++%20==19) printf("\n");
		}

 return 0;
}


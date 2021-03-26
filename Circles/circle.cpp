#include <cstdio>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
const int radius = 5;
const int tolerence = 10;
int equal;

for(int x = -radius; x<=radius; x++)
{
	for(int y = -radius; y<=radius; y++)
	{
		equal = (x*x)+ (y*y) - (radius*radius);
		printf(abs(equal) < tolerence? "*":" ");
	}		
	printf("\r\n");
}

return 0;
}

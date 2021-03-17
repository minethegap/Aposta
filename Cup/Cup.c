# include <stdio.h>
# include <stdlib.h>

typedef enum { hot, cold } cupStyle;
typedef enum { oz, ml } units;

typedef struct
{
	cupStyle cupstyle;
	units measure;
	int capacity;
} Cup;

void printCup ( Cup *cup )
{
	char *styleString, *unitString;

	if ( cup->cupstyle == hot ) styleString = "hot cup";
	else styleString = "cold cup";

	if ( cup->measure == oz ) unitString = "oz";
	else unitString = "ml";

	printf("%3d %s %s\n", cup->capacity, unitString, styleString);

}
int main (int argc, char *argv[] )
{
	/* declare cupA cupB */
		Cup cupA = { hot, oz, 12 };
		Cup cupB = { cold, ml, 24 };	

		printCup( &cupA );
		printCup( &cupB );
	return 0;
}

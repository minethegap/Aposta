# include <stdio.h>
# include <stdlib.h>

/* Define a struct type, use typedef for a beverage cup.
 * Cups maybe for a cold or hot beverages, 
 * and contain an integer number of fluid ounces or milliters.*/
# define hot 100;
# define cold 4;

/* declare Cup type */
typedef struct 
{
	int type;
	int ounces;
} Cup;

void printCup ( Cup *cup )
{
	printf("Cup of type is %d\t ounces is %d\n", cup->type, cup->ounces);

}
int main(int argc, char *argv[])
{
	/* declare and initialize two cups */
	Cup CupA, CupB;

	CupA.type =  hot;
	CupA.ounces = 50;

	/* print value of both cups */
	printCup( &CupA );

	return 0;
}	

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

float setArea(float r)
{
		return PI * r * r;
}

int main(int argc, char *argv[])
{
	float radius, area;
	printf("Please enter radiusi of circle\n");
	scanf("%f", &radius);
	area = setArea(radius);

	printf("Area of circle: %0.4f\n", area);

	return 0;
}

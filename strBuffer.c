# include <stdio.h>
# include <string.h>

int main(int argc, char *argv[])
{
	char buffer[1024];
	strcpy( buffer, "SHORT String" );
	strcat( buffer, "MADE LONGER!" );

	return 0;
}

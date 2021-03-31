#include <stdio.h>
#define SURNAME "he"
#define NAME	"dongsheng"

int main()
{
	printf("%s %s\n", SURNAME, NAME);

	printf("%s\n%s\n", SURNAME, NAME);

	printf("%s", SURNAME);
	printf("%s\n", NAME);
	
	return 0;
}


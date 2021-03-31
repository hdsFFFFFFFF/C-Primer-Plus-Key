#include <stdio.h>

void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
	printf("Which nobody can deny!\n");
}

int main()
{
	int i = 3;
	while (i--) {
		jolly();
	}

	deny();
	
	return 0;
}


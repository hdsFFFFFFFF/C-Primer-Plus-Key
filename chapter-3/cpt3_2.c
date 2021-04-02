#include <stdio.h>

int main(void)
{
	unsigned value;
	char select = 'y';
	
	do {
		printf("Please input an ASCII value\n");

		scanf("%d", &value);

		if (value < 128)
			printf("%c\n", value);
		else
			printf("error:overflow.Please try again\n");
	
		printf("Again? Please input 'y' to goon, other to exit\n");
		getchar();
		if ('y' != getchar())
			select = 'n';
	} while (select == 'y');

	return 0;
}


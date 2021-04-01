#include <stdio.h>

int main(void)
{
start:
	printf("Please input an ASCII value\n");

	unsigned value;
	scanf("%d", &value);

	//ascii_trans(value);
	if (value < 128)
		printf("%c\n", value);
	else
		printf("error:overflow.Please try again\n");
	
	printf("Again? Please input 'y' to goon, other to exit\n");
	if ('y' == getchar())
		goto start;

	return 0;
}


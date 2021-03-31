#include <stdio.h>

void recv_name(void)
{
	char name[15];
	
	scanf("%s", name);
	printf("%s\n", name);
}

void recv_addr(void)
{
	char addr[15];

	scanf("%s", addr);
	printf("%s\n", addr);
}

int main()
{
	printf("Please input name and address:\n");

	recv_name();
	recv_addr();
	
	return 0;
}


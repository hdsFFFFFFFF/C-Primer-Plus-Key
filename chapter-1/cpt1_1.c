#include <stdio.h>

void inch_into_cm(float *value)
{
	*value *= 2.54;
}

int main()
{
start:
	printf("Please input the inch value:\n");

	float inch_val;
	scanf("%f", &inch_val);

	inch_into_cm(&inch_val);
	printf("cm:%f\n", inch_val);
	
	//goto start;
	
	printf("enter 'y' to goon, enter to exit\n");
	//int select;
	char select;
	
	scanf("%c", &select);
	if (select == 'y')
		goto start;

	return 0;
}


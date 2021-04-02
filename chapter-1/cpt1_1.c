#include <stdio.h>

double inch_into_cm(float value)
{
	return value *= 2.54;
}

int main()
{
	/*
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
	*/

	char select = 'y';
	float inch_val;
	
	while (select == 'y') {
		printf("Please input the inch value:\n");

		scanf("%f", &inch_val);
		fflush(stdin);
		
		double ret = inch_into_cm(inch_val);
		printf("%lf\n", ret);

		
		printf("Please input 'y' to goon, other to exit.\n");
	
		getchar();
		if (getchar() != 'y') {
			select = 'n';
			fflush(stdin);
		}
	}

	return 0;
}


#include <stdio.h>

int trans_year_to_days(int years)
{
	return years * 365;
}

int main()
{
	int years;
	printf("Please input yous's years\n");
	scanf("%d", &years);

	int days;
	days = trans_year_to_days(years);
	printf("Days of years is: %d\n", days);
	
	return 0;
}


#include <stdio.h>
#define DAYS_PER_YEAR	365

int trans_year_to_days(int years)
{
	return years * DAYS_PER_YEAR;
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


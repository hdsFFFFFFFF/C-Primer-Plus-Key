#include <stdio.h>

void inch_into_cm(float *value)
{
	*value *= 2.54;
}

int main()
{
	printf("Please input the inch value:\n");

	float inch_val;
	scanf("%f", &inch_val);

	inch_into_cm(&inch_val);
	printf("cm:%f\n", inch_val);

	return 0;
}


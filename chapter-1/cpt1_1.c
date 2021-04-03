#include <stdio.h>

double inch_into_cm(float value)
{
	return value *= 2.54;
}

int main()
{
	char select = 'y';
	float inch_val;
	
	do {
		printf("Please input the inch value:\n");

		scanf("%f", &inch_val);/* 按下Enter后，'\n'字符留在了stdin中。如果紧接着调用getchar(),getchar()
					  发现stdin中有字符'\n'，就直接读取了。*/
		
		double ret = inch_into_cm(inch_val);
		printf("%lf\n", ret);

		
		printf("Please input 'y' to goon, other to exit.\n");
	
		getchar();	/* 吸收换行符 */
		if (getchar() != 'y') {
			select = 'n';
			//fflush(stdin);
		}
	} while (select == 'y');

	return 0;
}


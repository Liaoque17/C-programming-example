#include <stdio.h>
#include <stdlib.h>

int main()
{
	double f_num, s_num, product;
	printf("Two floating point :\n");
	scanf("%lf%lf", &f_num, &s_num);
	product = f_num * s_num;
	printf("%lf*%lf=%.2lf\n", f_num, s_num, product);
	system("pause");
	return 0;
}
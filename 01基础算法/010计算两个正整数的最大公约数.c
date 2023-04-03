#include <stdio.h>

int main()
{
	int a, b, temp, i;
	printf("input a&b:");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i=b;i>0;i--)
		if (a % i == 0 && b % i == 0)
		{
			printf("THE GCD of %d and %d is : %d\b", a, b, i);
			break;
		}
	return 0;
}
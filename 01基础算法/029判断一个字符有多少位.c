#include <stdio.h>
#include <stdlib.h>

int main()
{
	long long n;
	int count = 0;
	printf("input integer:\n");
	scanf("%lld", &n);
	while (n!=0)
	{
		n /= 10;
		++count;
	}
	printf("The nubmer is %d digits\n", count);
	return 0;
}
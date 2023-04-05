#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, k, n ;
	printf("input n:\n");
	scanf("%d", &n);
	for (i = 2; i <= n;i++)
	{
		k = (int)sqrt(i);
		for (j = 2; j <= k; j++)
		
			if (i % j == 0)
			
				break;
			
	
			printf("%d ", i);
	
	return 0;
}

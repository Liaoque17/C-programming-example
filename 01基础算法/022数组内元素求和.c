#include <stdio.h>

int main()
{
	int i, array[10];
	printf("input arr\n");
	for(i=0;i<10;i++)
	scanf("%d", &array[i]);
	int sum, loop;
	sum = 0;
	for (loop = 9; loop >= 0; loop--)
	{
		sum = sum + array[loop];
	}
	printf("The sum is: %d \n", sum);
	return 0;
}
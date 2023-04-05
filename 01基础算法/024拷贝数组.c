#include <stdio.h>

int main()
{
	int i, origin[5], copied[5], loop;
	printf("input array:\n");
	for(i=0;i<5;i++)
	scanf("%d", &origin[i]);

	for (loop = 0; loop < 5; loop++)
	{
		copied[loop] = origin[loop];
	}

	printf("Element array -> The copied array:\n");

	for (loop = 0; loop < 5; loop++)
	{
		printf(" %2d %2d\n", origin[loop], copied[loop]);
	}
	return 0;

}
#include <stdio.h>
#define N 6

int main()
{
	int a[N] = { 0,1,2,3,4,5 };
	int i, t;
	printf("The primitive array:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d", a[i]);
	}
	for (i = 0; i < N / 2; i++)
	{
		t = a[i];
		a[i] = a[N - i-1];
		a[N - i - 1] = t;

	}
	printf("\nThe sorted array:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;
}
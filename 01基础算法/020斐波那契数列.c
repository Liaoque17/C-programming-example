#include <stdio.h>

int main()
{
	int i, n, t1, t2, nextTerm;
	t1 = 0;
	t2 = 1;
	printf("Number of output items:\n");
	scanf("%d", &n);
	printf("쳲���������Ӧ�ã�");
	for (i = 1; i <= n; i++)
	{
		printf("%d ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	return 0;
}
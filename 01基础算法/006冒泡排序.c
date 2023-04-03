#include <stdio.h>

int main()
{
	int i, j, t, a[6];
	printf("输入数值：\n");
	for (i = 1; i < 6; i++)
		scanf_s("%d", &a[i]);
	for(i=1;i<5;i++)
		for(j=1;j<6-i;j++)
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	printf("排序后的顺序是：\n");
	for (i = 1; i <= 5; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}
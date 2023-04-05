#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("input character:\n");
	scanf("%c", &c);
	printf("The ASCII of %c is %d\n", c, c);
	system("pause");
	return 0;
}
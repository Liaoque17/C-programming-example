#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	printf("input character:\n");
	scanf("%c", &c);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		printf(" is letters\n");
	else
		printf(" not is letters\n");
	return 0;
}
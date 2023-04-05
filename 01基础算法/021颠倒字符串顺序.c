#include <stdio.h>
int reverseSentence()
{
	char c;
	scanf("%c", &c);
	if (c != '\n')
	{
		reverseSentence();
		printf("%c", c);
	}
}

int main()
{
	printf("input string:\n");
	reverseSentence();
	return 0;
}


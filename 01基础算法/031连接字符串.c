#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s1[10], s2[10], i, j;
	printf("first string:\n");
	scanf("%s", s1);
	printf("second string:\n");
	scanf("%s", s2);
	for (i = 0; s1[i] != '\0'; ++i);
	for (j = 0; s2[j] != '\0'; ++j,++i)
	{
		s1[i] = s2[j];
	}
	s1[i] = '\0';
	printf("After connection:$s\n", s1);
	return 0;
}
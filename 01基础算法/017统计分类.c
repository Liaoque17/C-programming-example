#include <stdio.h>

int main()
{
	int score;
	char grade;
	printf("score:");
	scanf("%d", &score);
	grade = (score >= 95) ? 'A+' : ((score >= 90) ? 'A' : ((score >= 80) ? 'B' : ((score >= 60) ? 'C' : 'D')));
	printf("%c\n", grade);
	return 0;
}
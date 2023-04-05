#include <stdio.h>

int main()
{
	char c;
	int letters = 0, spaces = 0, digits = 0, others = 0;
	printf("input character: \n");
	while ((c = getchar()) != '\n')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

			letters++;

		else if (c >= '0' && c <= '9') 
			digits++;

		else if (c == ' ')
			spaces++;
		
		else
			others++;
		

		
	}
		printf("digits=%d,letters=%d,spaces=%d,others=%d\n", digits, letters, spaces, others);
		return 0;
}
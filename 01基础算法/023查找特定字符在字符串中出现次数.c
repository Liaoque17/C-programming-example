#include <stdio.h>

int main()
{
	char str[100], ch;
	int i, frequency = 0;

	printf("string:\n");
	fgets(str, (sizeof str / sizeof str[0]), stdin);

	printf("Specific character:\n");
	scanf("%c", &ch);

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (ch == str[i])
		{
			++frequency;
		}
	}
	printf("The number of occurrences of character %c in the string is %d ", ch, frequency);

	return 0;
}
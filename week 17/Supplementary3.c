#include <stdio.h>
#include <string.h>

void function1(char input[]);

int main()
{
	int length;
	char input[100];
	printf ("Enter something: ");
	gets (input);
	length = strlen(input);

	if (input[0] == 'a' && input[length - 1] == 'q')
	{
		function1(input);
	}
	return(0);
}

void function1(char input[])
{
	int i = 0;
	int upper = 0;
	int lower = 0;
	int digit = 0;

	while (input[i] < 100)
	{
		if (input[i] >= 48 && input[i] <= 57)
		{
			++digit;
			++i;
		}
		else if (input[i] >= 65 && input[i] <= 90)
		{
			++upper;
			++i;
		}
		else if (input[i] >= 97 && input[i] <= 122)
		{
			++lower;
			++i;
		}
	}
	printf("\nThe number of uppercase letters %i, lowercase %i and digits %i.", upper, lower, digit);
}

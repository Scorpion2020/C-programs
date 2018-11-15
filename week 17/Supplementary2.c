#include <stdio.h>

int function1(int mini, int max);

int main()
{
	int mini;
	int max;
	printf ("Enter your minimum number: ");
	scanf ("%i", &mini);
	printf ("Enter your maximum number: ");
	scanf ("%i", &max);

	printf ("The minimum number enter between %i and %i was %i.", mini, max, function1(mini, max));

	return (0);
}

int function1(int mini, int max)
{
	int newmini;
	int numofinput = 0;
	int input;

	while (numofinput < 100)
	{
		printf ("Enter a number between your max and mini: ");
		scanf ("%i", &input);
		if (input < newmini && input > mini && input < max)
		{
			newmini = input;
			++numofinput;
		}
		else
		{
			++numofinput;
		}
	}
	return newmini;
}


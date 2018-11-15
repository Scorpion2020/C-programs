#include <stdio.h>

int main()
{

	int max = 0, mini = 0, input = 1, zero = 0;

	while (zero == 0) {
		printf ("Input a number (-/+): ");
		scanf ("%i", &input);
		if (input < mini) {
			mini = input;
		}
		else if (input > max) {
			max = input;
		}
		else if (input == 0) {
			zero++;
			printf ("Zero is counted as neither a positive nor negative number.\n");
		}
	}
	printf ("The highest number was %i and the lowest number was %i\n", max, mini);
	return(0);
}

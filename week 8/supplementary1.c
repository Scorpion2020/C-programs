#include <stdio.h>

int main()
{
	float sum = 0;
	float input = 0;
	int totalinput = 0;

	while (sum < 100) {
		printf ("enter a number: ");
		scanf ("%f", &input);
		sum = sum + input;
		totalinput++;
	}
	printf ("total number of inputs %d. The sum of inputs %.2f", totalinput, sum);
	return (0);
}

#include <stdio.h>

int main()
{
	int input;
	int save;

	for (input = 0; input < 10; input++){
		printf ("Enter a number : ");
		scanf ("%d", &save);
		if (input == 10) {
			break;
		}
	}
	printf ("Program terminated");
	return (0);
}

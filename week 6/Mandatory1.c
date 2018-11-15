#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int dice;
	int max_number = 6;
	int min_number = 1;

	srand(time(NULL));

	dice = rand() % (max_number + 1 - min_number) + min_number;

	if (dice < 6) {
		printf ("%d\n", dice);
		printf ("Winter is coming.\n");
	}
	else {
		printf ("Winter is here.\n");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int dice;
	int max_number = 6, min_number = 1;

	srand(time(NULL));

	dice = rand() % (max_number + 1 - min_number) + min_number;

	switch(dice)
	{
		case 6:
			printf ("Winter is here\n");
			break;
		default:
			printf ("Winter is coming\n");
			break;
	}
	return (0);
}

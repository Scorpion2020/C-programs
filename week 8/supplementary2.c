#include <stdio.h>

int main()
{
	int start = 111;
	int hundre;
	int tens;
	int ones;

	while (start < 1000) {
		hundre = start / 100;
		ones = start % 10;
		if (hundre == 4) {
			start++;
		}
		else if (ones == 6){
			start++;
		}
		else {
			printf ("%i\n", start);
			start++;
		}
	}
	return (0);
}


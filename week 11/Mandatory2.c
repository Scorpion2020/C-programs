#include <stdio.h>

int main() {

	int minimum;
	int maximum;

	printf ("Enter a minimum decimal numberthat you wish to be outputed from the ASCII table: ");
	scanf ("%i", &minimum);

	printf ("Enter a maximum decimal numberthat you wish to be outputed from the ASCII table: ");
        scanf ("%i", &maximum);

	while (minimum <= maximum) {
		printf ("%C\t%i\n", minimum, minimum);
		++minimum;
	}
	return(0);
}

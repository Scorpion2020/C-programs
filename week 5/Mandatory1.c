#include <stdio.h>

int main()
{
	int x = 0;

	x = ((3 + 4) * 5) - 6;
	printf ("%d\n", x);

	x = 3 + (4 * (5 - 6));
	printf ("%d\n", x);

        x = -3 + (4 * (5 - 6));
        printf ("%d\n", x);

        x = -(3 + (4 * 5) - 6);
        printf ("%d\n", x);

	return (0);
}

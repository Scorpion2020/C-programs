#include <stdio.h>

int main() {

	double a, *ptr;
	int b, *ptr2;
	ptr = &a;
	ptr2 = &b;

	printf ("Enter a float number: ");
	scanf ("%lf", &*ptr);

	*ptr2 = *ptr;

	printf ("The Interger part is %i\n", b);
	printf ("The fractional part is %lf\n", a-b);

	return(0);
}

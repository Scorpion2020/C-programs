#include <stdio.h>

int main() {

	double a, b;
	double *ptr, *ptr2;

	ptr = &a;
        ptr2 = &b;

	printf ("Enter a value for A and B: ");
	scanf ("%lf %lf", &*ptr, &*ptr2);

	printf ("The value of A is %lf and B is %lf\n", a, b);
	printf ("The total of A + B is %lf\n", a+b);
	printf ("The memory location of ptr is %p\n", &ptr);
        printf ("The memory location of ptr2 is %p\n", &ptr2);
	printf ("The memory location of A is %p\n", &a);
        printf ("The memory location of B is %p\n", &b);

	return(0);
}

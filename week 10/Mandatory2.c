#include <stdio.h>

int main() {

	int a, b = 20, *ptr;

	ptr = &b;
	a = *ptr;
	*ptr = 30;

	printf ("The value of a is %i\n", a);
	printf ("The value of b is %d\n", b);
	printf ("The memory location is %p\n", &ptr);
	printf ("The memory location of A is %p\n", &a);
	printf ("The memory location of B is %p\n", &b);
	return(0);
}

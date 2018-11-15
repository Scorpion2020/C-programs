#include <stdio.h>

int main() {

	int *ptr;
	int a = 10;

	ptr = &a;
	*ptr = 15;

	printf ("a = %d\n", a);
	printf ("the memory location of ptr is %p\n", &ptr);
	printf ("the memory location of a is %p\n", &a);

	return(0);
}

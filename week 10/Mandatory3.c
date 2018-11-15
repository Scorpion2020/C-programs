#include <stdio.h>

int main() {

	int a = 30;
	int *ptr;
	int **ptr2;

	ptr = &a;
	ptr2 = &ptr;
	**ptr2 = 35;

	printf ("The value of a is %i\n", a);
	printf ("The memory location of a is %p\n", &a);
	printf ("The memory location of ptr is %p\n", &ptr);
	printf ("The memory location of ptr2 is %p\n", &ptr2);
	return(0);
}



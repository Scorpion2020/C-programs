#include <stdio.h>

int main() {

	int onecheck;
	int twocheck;
	int threecheck;
	int *ptr, *ptr2, *ptr3;

	ptr = &onecheck;
	ptr2 = &twocheck;
	ptr3 = &threecheck;

	printf ("Input the three intergers: ");
	scanf ("%d %d %d", &*ptr, &*ptr2, &*ptr3);

	if ((++*ptr) == *ptr2 && (++*ptr2) == *ptr3) {
		printf ("They are successive\n");
	}

	else if ((--*ptr) == *ptr2 && (--*ptr2) == *ptr3) {
                printf ("They are successive\n");
        }

	else {
		printf ("They are not sucessive\n");
	}
	return (0);
}

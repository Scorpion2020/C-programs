#include <stdio.h>

int main()
{
	int onecheck;
	int twocheck;
	int threecheck;

	printf ("Input the three intergers: ");
	scanf ("%d %d %d", &onecheck, &twocheck, &threecheck);

	if ((++onecheck) == twocheck && (++twocheck) == threecheck) {
		printf ("They are successive\n");
	}
	else {
		printf ("They are not sucessive\n");
	}
	return (0);
}

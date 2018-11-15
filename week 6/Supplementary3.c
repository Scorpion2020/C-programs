#include <stdio.h>

int main()
{
	int interger1, interger2, interger3;
	int function;

	printf ("Enter three intergers: ");
	scanf ("%d %d %d", &interger1, &interger2, &interger3);

	printf ("Fuction 1 will tell you if the intergers are equal.\n");
	printf ("Fuction 2 will tell you if any two interger are equal.\n");
	printf ("Fuction 3 will tell you if how many of the intergers are between -5 and 5\n");

	printf ("Enter a function value (1, 2, 3): ");
	scanf ("%d", &function);

	switch (function)
	{
		case 1:
			if (interger1 == interger2 == interger3) {
				printf ("They are all equal to each other\n");
			}
			else {
				printf ("They are not equal to each other\n");
			}
		break;
		case 2:
			if (interger1 == interger2) {
				printf ("Interger 1 and interger 2 are equal\n");
			}
			else if (interger1 == interger3) {
				printf ("Interger 1 and Interger 3 are equal\n");
			}
			else if (interger2 == interger3) {
				printf ("Interger 2 and Interger 3 are equal\n");
			}
			else {
				printf ("None of them are equal\n");
			}
		break;
		case 3:
			if ((interger1 >= -5) && (interger1 <= 5)) {
				printf ("Interger 1 is between -5 and 5\n");
			}
			else {
				printf ("Interger 1 does not fall between -5 and 5\n");
			}
			if ((interger2 >= -5) && (interger2 <= 5)) {
                                printf ("Interger 2 is between -5 and 5\n");
                        }
                        else {
                                printf ("Interger 2 does not fall between -5 and 5");
                        }
			if ((interger3 >= -5) && (interger3 <= 5)) {
                                printf ("Interger 3 is between -5 and 5\n");
                        }
                        else {
                                printf ("Interger 3 does not fall between -5 and 5\n");
                        }
		break;
	}
	return (0);
}

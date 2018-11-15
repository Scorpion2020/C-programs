#include <stdio.h>

int main()
{
	int array[100];
	int input;
	int i;

	for (i = 0; i < 100; i++){
		if (i == 0){
			printf ("Enter a number: ");
			scanf ("%i", &array[i]);
		}
		else if (i > 0){
			printf ("Enter a number less than the previous input: ");
			scanf ("%i", &input);
			while (input > array[i - 1]){
				printf ("Re-Enter a number less than the previous input: ");
                        	scanf ("%i", &input);
				if (input < array[i -1]){
					array[i] = input;
				}
			}
			if (input < array[i - 1]){
				array[i] = input;
			}
		}
	}
	return(0);
}

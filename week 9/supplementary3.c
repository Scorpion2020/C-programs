#include <stdio.h>

int main()
{
	int array[100];
	int i;
	int j = 1;
	int count = 0;

	for (i = 0; i < 10; i++){
		printf ("Enter a number: ");
		scanf ("%d", &array[i]);
	}
	i = 0;
	for (i = 0; i < 10; i++){
		if (array[i] == array[i+1]){
			count++;
		}
	}
	printf ("The number of intergers that are repeated is %i\n", count);
	return (0);
}

#include <stdio.h>

int main()
{
	int array[10];
	int i;
	int r = 0;
	for (i = 0; i < 10; i++){
		printf ("Enter a interger number: ");
		scanf ("%d", &array[i]);
	}
	for (i = 0; i < 10; i++){
		if (array[i] > r){
			r = array[i];
		}
	}
	printf ("The highest number in the array is %d\n", r);
	return (0);
}


#include <stdio.h>

int main() {
	int input;
	int count = 0;
	int i = 0;
	int arr[200];
	while (input != EOF)
	{
		input = getchar();
		arr[count] = input;
		count++;
	}

	while (i <= count)
	{
		printf ("%c", arr[i]);
		i++;
	}
	printf ("count = %i \n", ((count - 1)/2));
	return(0);
}

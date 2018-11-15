#include <stdio.h>

int main() {
	char input = 0;
	int count = 0;
	int i = 0;
	char arr[200];
	int check = 0;

	while (input != EOF)
	{
		input = getchar();
		if (input == arr[count-1]){
			input = getchar();
		}
		else if (input != arr[count-1]){
			arr[count] = input;
			count++;
		}
	}

	while (i <= count)
	{
		printf ("%c", arr[i]);
		i++;
	}
	printf ("%i\n", check);
	return(0);
}


#include <stdio.h>
#include <string.h>

int main() {

	char arr1[100] = "Hello World";
	char arr2[100] = "Bradley";
	char a1[100];

	strcpy(a1, arr1);
	strcpy(arr1, arr2);
	strcpy(arr2, a1);

	printf ("%s\n", arr1);
	printf ("%s\n", arr2);
	return(0);
}


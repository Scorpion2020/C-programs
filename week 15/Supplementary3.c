#include <stdio.h>
#include <string.h>

int main() {

	char arr1[50];
	int length = 0;
	int i = 0;

	printf ("Enter a integer: ");
	gets (arr1);
	length = strlen(arr1);

	while (i < length) {
		printf ("'%c'\t", arr1[i]);
		i++;
	}
	return(0);
}

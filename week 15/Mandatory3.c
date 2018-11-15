#include <stdio.h>
#include <string.h>

int main() {

	char arr1[100];
	int length = 0;

	while (length < 5 || length > 10){
		printf ("Enter a string no shorter than 5 and no longer than 10: ");
		gets (arr1);
		length = strlen(arr1);
	}
	printf ("The string you enter was: %s\n", arr1);
	printf ("Your string was: %i\n", length);
	return(0);
}

#include <stdio.h>
#include <string.h>

int main(){

	char str1[100];
	char str2[100];
	char *match;
	int n, c;
	int com = 0;

	printf ("Enter characters for the first array: ");
	gets (str1);

	printf ("Enter characters for the second array: ");
	gets (str2);

	printf ("%s\n%s\n", str1, str2);

	match = strpbrk(str1, str2);

	if (match){
		for (c = *match; c < n - 1; c++){
			str1[c] = str1[c-1];
		}
	}
	else {
		com++;
	}

	printf ("The result is: ");
	printf ("%s\n", str1);
	return(0);
}

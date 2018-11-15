#include <stdio.h>
#include <string.h>

int main() {

	char str1[100];
	char str2[100];
	char str3[100];
	char temp1[100];
	int length = 0;

	printf ("Enter a string no longer than a 100 characters: ");
	gets (str1);
	length = strlen(str1);

	printf ("Enter a string no longer than a 100 characters: ");
        gets (str2);
       	length = strlen(str2);

        printf ("Enter a string no longer than a 100 characters: ");
        gets (str3);
        length = strlen(str3);

	strcpy(temp1, str3);
	strcpy(str3, str2);
	strcpy(str2, str1);
	strcpy(str1, temp1);

	printf ("%s\n", str1);
        printf ("%s\n", str2);
	printf ("%s\n", str3);
	
	return(0);
}



#include <stdio.h>
#include <string.h>

int main() {

	char mystring[100];
	int length;

	printf ("Input a string no longer than a hundred characters long: \n");
	gets (mystring);
	//scanf ("%[^\n]", mystring);
	length = strlen(mystring);
	//puts (mystring);
	printf ("\n\n You inputed: %s\n", mystring);
	printf ("The length of your input is: %i\n", length);
	printf ("The size of your input is: %i", sizeof (mystring));
	return(0);
}

#include <stdio.h>

int main()
{
	typedef struct
	{
		char name[40];
		char address[50];
		char email[30];
	}publisher;

	typedef struct
	{
		char nameofbook[30];
		int code;
		publisher bookAuthor;
	}book;

	book myBooks[3];
	int lcv;
	int userchoice;

	for (lcv = 0; lcv < 3; lcv++)
	{
		printf ("Enter the book's name: ");
		scanf (" %[^\n]", &myBooks[lcv].nameofbook);

		printf ("Enter book's code: ");
		scanf ("%i", &myBooks[lcv].code);

		printf ("Enter name of author: ");
		scanf (" %[^\n]", &myBooks[lcv].bookAuthor.name);

		printf ("Enter address of author: ");
		scanf (" %[^\n]", &myBooks[lcv].bookAuthor.address);

		printf ("Enter email address of author: ");
		scanf (" %[^\n]", &myBooks[lcv].bookAuthor.email);
	}

	printf ("Enter books code: ");
	scanf ("%i", &userchoice);

	for (lcv = 0; lcv < 3; lcv++)
	{
		if (myBooks[lcv].code == userchoice)
		{
			printf ("Title of book = %s", myBooks[lcv].nameofbook);
			printf ("Author of book = %s", myBooks[lcv].bookAuthor.name);
		}
	}
	return(0);
}

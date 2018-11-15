#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int highest = 0;
	int highestid = 0;

	typedef struct
	{
		char firstname[20];
		char surename[20];
		int age;
		int wage;
	}employees;

	employees myemployees[50];

	for (i = 0; i < 50; i++)
	{
		printf ("Enter employee's firstname: ");
		scanf ("%s", myemployees[i].firstname);
		printf ("Enter employee's surename: ");
		scanf ("%s", myemployees[i].surename);
		printf ("Enter employee's age: ");
		scanf ("%i", &myemployees[i].age);
		printf ("Enter employee's wage: ");
		scanf ("%i", &myemployees[i].wage);
	}

	for (i = 0; i < 50; i++)
	{
		printf ("%s\n", myemployees[i].firstname);
		printf ("%s\n", myemployees[i].surename);
		printf ("%i\n", myemployees[i].age);
		printf ("%i\n", myemployees[i].wage);
	}

	for (i = 0; i < 50; i++)
	{
		if (myemployees[i].wage > highest)
		{
			highest = myemployees[i].wage;
			highestid = i;
		}
	}
	printf ("the person with the highest salary is: %s %s\n", myemployees[highestid].firstname, myemployees[highestid].surename);
	return(0);
}

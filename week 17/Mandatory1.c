#include <stdio.h>

int addition();
int subtraction();
int multiplication();
int division();
int quit();

int addition()
{

        float num1;
        float num2;
        float total;

        printf("Enter the two numbers you wish to add: ");
        scanf ("%f %f", &num1, &num2);

        total = num1 + num2;

        printf("The total is: %f\n", total);

        return(0);
}

int subtraction()
{

        float num1;
        float num2;
        float total;

        printf("Enter the two numbers you wish to subtract: ");
        scanf ("%f %f", &num1, &num2);

        total = num1 - num2;

        printf("The total is: %f\n", total);

        return(0);
}

int multiplication()
{

        float num1;
        float num2;
        float total;

        printf("Enter the two numbers you wish to multiple: ");
        scanf ("%f %f", &num1, &num2);

        total = num1 * num2;

        printf("The total is: %f\n", total);

        return(0);
}

int division()
{

        float num1;
        float num2;
        float total;

        printf("Enter the two numbers you wish to divide: ");
        scanf ("%f %f", &num1, &num2);

        total = num1 / num2;

        printf("The total is: %f\n", total);

        return(0);
}

int quit()
{
	printf ("Quitting the program...");
	return(0);
}

int main()
{

	char userquest;
	printf ("Enter '1' for addition\nEnter '2' for subtraction\nEnter '3' Multipliction\nEnter '4' for division\nEnter 'q' to quit\nEnter your request: ");
	scanf ("%i", &userquest);

	switch(userquest)
	{
		case 1:
			addition();
			break;
		case 2:
			subtraction();
			break;
		case 3:
			multiplication();
			break;
		case 4:
			division();
			break;
		case 81:
			break;
	}
	return(0);
}

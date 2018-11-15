#include <stdio.h>

int addition();
int subtraction();
int multiplication();
int division();
int quit();

int addition()
{
	int arr[100];
	int x = 0;
	int z = 0;
	int total = 0;
	char userinput;
	char convert;

	printf ("Enter the values you wish to add (Once complete enter '='): ");
	scanf ("%c", &userinput);

	while(userinput != '=')
	{
		if (userinput != '\n' && ((int)userinput != 32))
		{
			if (x == 0)
			{
				arr[x] = (int)userinput;
				convert = userinput - '0';
				total = convert;
				x++;
			}
			else
			{
				arr[x] = (int)userinput;
				convert = userinput - '0';
				total = total + convert;
				x++;
			}
		}
		scanf ("%c", &userinput);
	}

	for (z = 0; z < x; z++)
	{
		if (z == (x - 1))
		{
			printf("%c ", arr[z]);
		}
		else
		{
			printf("%c + ", arr[z]);
		}
	}
	printf ("= %i\n", total);
	return (0);
}

int subtraction()
{
        int arr[100];
        int x = 0;
        int z = 0;
        int total = 0;
        char userinput;
        char convert;

        printf ("Enter the values you wish to add (Once complete enter '='): ");
        scanf ("%c", &userinput);

        while(userinput != '=')
        {
                if (userinput != '\n' && ((int)userinput != 32))
                {
                        if (x == 0)
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = convert;
                                x++;
                        }
                        else
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = total - convert;
                                x++;
                        }
                }
                scanf ("%c", &userinput);
        }

        for (z = 0; z < x; z++)
        {
                if (z == (x - 1))
                {
                        printf("%c ", arr[z]);
		}
                else
                {
                        printf("%c - ", arr[z]);
                }
        }
        printf ("= %i\n", total);
        return (0);
}

int division()
{
        int arr[100];
        int x = 0;
        int z = 0;
        int total = 0;
        char userinput;
        char convert;

        printf ("Enter the values you wish to add (Once complete enter '='): ");
        scanf ("%c", &userinput);

        while(userinput != '=')
        {
                if (userinput != '\n' && ((int)userinput != 32))
                {
                        if (x == 0)
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = convert;
                                x++;
                        }
                        else
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = total / convert;
                                x++;
                        }
                }
                scanf ("%c", &userinput);
        }

        for (z = 0; z < x; z++)
        {
                if (z == (x - 1))
                {
                        printf("%c ", arr[z]);
                }
                else
                {
                        printf("%c / ", arr[z]);
                }
        }
        printf ("= %i\n", total);
        return (0);
}

int multiplication()
{
        int arr[100];
        int x = 0;
        int z = 0;
        int total = 0;
        char userinput;
        char convert;

        printf ("Enter the values you wish to add (Once complete enter '='): ");
        scanf ("%c", &userinput);

        while(userinput != '=')
        {
                if (userinput != '\n' && ((int)userinput != 32))
                {
                        if (x == 0)
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = convert;
                                x++;
                        }
                        else
                        {
                                arr[x] = (int)userinput;
                                convert = userinput - '0';
                                total = total * convert;
                                x++;
                        }
                }
                scanf ("%c", &userinput);
        }

        for (z = 0; z < x; z++)
        {
                if (z == (x - 1))
                {
                        printf("%c ", arr[z]);
                }
                else
                {
                        printf("%c * ", arr[z]);
                }
        }
        printf ("= %i\n", total);
        return (0);
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

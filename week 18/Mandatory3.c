#include <stdio.h>

int main()
{
        typedef struct
        {
                char carModel[30];
                int price;
		int yearOfMan;
        }car;

        car cars[10];
        int lcv;
        int userchoice;
	char inputmodel[30];
	int inputprice;

        for (lcv = 0; lcv < 2; lcv++)
        {
                printf ("Enter the car model: ");
                scanf (" %[^\n]", &cars[lcv].carModel);

                printf ("Enter price of car: ");
                scanf ("%i", &cars[lcv].price);

                printf ("Enter year of Manufacture: ");
                scanf (" %[^\n]", &cars[lcv].yearOfMan);
        }

        printf ("Enter 1 of find a car model\nEnter 2 of price\nEnter 3 for termination\nEnter now: ");
	scanf ("%i", &userchoice);

        if (userchoice == 1)
	{
		printf ("Enter model name or '*' for all: ");
		scanf (" %[^\n]", &inputmodel);
		if (inputmodel[0] == '*')
		{
			for (lcv = 0; lcv < 2; lcv++)
    			{
                        	printf ("%s\n", cars[lcv].carModel);
				printf ("Price = %i\n", cars[lcv].price);
                                printf ("Year of manufacture = %i\n", cars[lcv].yearOfMan);
			}
		}
		else if (cars[lcv].carModel == inputmodel)
		{
			for (lcv = 0; lcv < 2; lcv++)
		        {
                		if (cars[lcv].carModel == inputmodel)
                		{
					printf ("Model = %s\n", cars[lcv].carModel);
					printf ("Price = %i\n", cars[lcv].price);
					printf ("Year of manufacture = %i\n", cars[lcv].yearOfMan);
				}
			}
		}
		else
		{
			return(0);
		}
	}
	else if (userchoice == 2)
	{
		printf ("Enter price: ");
                scanf ("%i", &inputprice);
                for (lcv = 0; lcv < 2; lcv++)
                {
			if (cars[lcv].price > inputprice)
			{
				printf ("%s\n", cars[lcv].carModel);
                        }
                }
	}
	else if (userchoice == 3)
	{
		printf ("Program closed\n");
		return(0);
	}
	return(0);
}

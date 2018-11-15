#include <stdio.h>

int main()
{
	float item1, item2, item3, item4;
	float sub;
	float discount;
	float total;

	printf ("Enter the price of all items: ");
	scanf ("%f %f %f %f", &item1, &item2, &item3, &item4);

	sub = item1 + item2 + item3 + item4;

	if (sub >= 100) {

		printf ("You are get a 5%% discount\n");
		discount = ((sub / 100) * 5);
		total = sub - discount;
		printf ("New amount due is: %f\n", total);
	}

	else {
		printf ("Total amount due is: %f\n", sub);
	}

	return (0);
}

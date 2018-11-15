#include <stdio.h>

int main()
{
	float fixamount = 10;
	int cubicmeters;
	float totalamount;
	float b = (30 * 0.6);
	float c = (20 * 0.8);
	float d = (10 * 1);

	printf ("Enter the amount of water used in Cubic Meters: ");
	scanf ("%d", &cubicmeters);

	if (cubicmeters <= 30) {
		totalamount = (cubicmeters * 0.6) + fixamount;
		printf ("The total amount due is $%.2f\n", totalamount);
	}
	else if ((cubicmeters <= 50) && (cubicmeters > 30)) {
		totalamount = ((cubicmeters - 30) * 0.8) + b + fixamount;
		printf ("The total amount due is $%.2f\n", totalamount);
	}
	else if ((cubicmeters <= 60) && (cubicmeters > 50)) {
		totalamount = ((cubicmeters - 50) * 1) + c + b + fixamount;
		printf ("The total amount due is $%.2f\n", totalamount);
	}
	else if (cubicmeters > 60) {
		totalamount = ((cubicmeters - 60) * 1.2) + d + c + b + fixamount;
		printf ("The total amount due is $%.2f\n");
	}
	return (0);
}

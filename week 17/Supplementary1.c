#include <stdio.h>
int function(int a, int b, int c);
int main()
{
        int a, b, c;

        printf ("Enter 3 numbers: ");
        scanf ("%i %i %i", &a, &b, &c);

        printf("%i\n",function(a,b,c));

        return 0;
}
int function(int a, int b, int c)
{
	int d;
	d = a + b;
	if (c == d)
	{
		if (a > b)
		{
			return a;
		}
		else if (a < b)
		{
			return b;
		}
	}
	else
	{
		if (b < c)
		{
			return b;
		}
		else if (b > c)
		{
			return c;
		}
	}
}

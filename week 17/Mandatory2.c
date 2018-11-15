#include <stdio.h>
#include <math.h>

int area();
int circumference();
int volume();

int area()
{
	float radius;
	float area;

	printf ("Enter the size of the radius: ");
	scanf ("%f", &radius);

	area = (M_PI * (radius * radius)); 

	printf ("The area of the circle is %f", area);
	return(0);
}

int circumference()
{
	float radius;
	float circumf;

	printf ("Enter the size of the radius: ");
        scanf ("%f", &radius);

        circumf = (M_PI * (radius + radius)); 

        printf ("The circumference of the circle is %f", circumf);
        return(0);
}

int volume()
{
	float radius;
	float vol;

	printf ("Enter the size of the radius: ");
        scanf ("%f", &radius);

	vol = ((4/3 * M_PI) * (radius*radius*radius));

	printf ("The volume of the sphere is %f", vol);
	return(0);
}

int main()
{
	int userquest;
        printf ("Enter '1' for area\nEnter '2' for circumference\nEnter '3' for volume\nEnter 'q' to quit\nEnter now: ");
        scanf ("%i", &userquest);

        switch(userquest)
        {
                case 1:
                        area();
                        break;
                case 2:
                        circumference();
                        break;
                case 3:
                        volume();
			break;
		case 81:
			break;
	}
	return(0);
}

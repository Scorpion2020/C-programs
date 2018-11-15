 #include <stdio.h>

int main()
{

	int x = 2, y = 0, z = 0;

        x *= 3 + 2;
        printf("%d\n", x);

        x *= y = z + 4;
        printf("%d\n", x);

        x = y = !z;
        printf("%d\n", x);

        x = y = z;
	printf("%d\n", x);

	return 0;
}

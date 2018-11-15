
#include <stdio.h>

int main()
{
        char input;
        int total = 0, count = 0;
        while (input != 'q' && total <= 500)
        {
                input = getchar();
                total += input;
                count++;
        }
        printf ("%i\n", total);
        printf ("%i\n", ((count+1)/2));
        return(0);
}


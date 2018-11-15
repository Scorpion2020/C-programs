#include <stdio.h>

int main()
{
	char character[10];
	int i;
	int r = 0;
	for (i = 0; i < 10; i++){
                printf ("Enter a character: ");
		scanf ("%s", &character[i]);
        }
        for (i = 0; i < 10; i++){
                if (character[i] > r){
                        r = character[i];
                }
        }
        printf ("The highest value character in the array is %c\n", r);
        return (0);
}

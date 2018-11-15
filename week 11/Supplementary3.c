#include <stdio.h>

int main()
{
        char arr[100];
	int check = 0;
	int input;
        int i = 0;
        int count = 0;

        while (count < 10)
        {
	        printf ("Enter a character: ");
                input = getchar();
		//for (check=0; check < 200; check++)
		//{
                //	if (arr[check] == input)
                //        {
                //        	input = getchar();
                //        }
        	//}
		count++;
        }
        for (i = 0; i < 10; i++){
        	printf("%c", arr[i]);
        }
	return(0);
}

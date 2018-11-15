
#include <stdio.h>

int main() {
        int input;
        int count = 0;
        int i = 0;
        int arr[200];
        int digits = 0, letters = 0, others = 0, star = 0;

        while (input != EOF)
        {
                input = getchar();
                arr[count] = input;
                if (input == '*')
                {
                        star++;
                }
                if (star == 1)
                {

                        if (arr[count] >='0' && arr[count] <='9')
                        {
                                digits++;
                        }
                        else if (arr[count] >='a' && arr[count] <='z' || arr[count] >='A' && arr[count] <='Z')
                        {
                                letters++;
                        }
                        else
                        {
                                others++;
                        }
                        count++;
                }
        }
        printf ("The user input between the two '*' (letters: %i digits: %i others: %d)\n", letters, digits, ((others$
        return(0);
}








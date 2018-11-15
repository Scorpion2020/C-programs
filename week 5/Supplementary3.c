#include <stdio.h>

int main()
{
	int miniscore;
	int student1;
	int student2;
	int student3;
	printf ("Enter the minimum score required to pass: ");
	scanf ("%d", &miniscore);

	if (miniscore > 10) {
		printf ("Re-enter minimum score: ");
		scanf ("%d", &miniscore);
	}

	printf ("Enter the score for student 1,2 and 3 in that order: ");
	scanf ("%d %d %d", &student1, &student2, &student3);
	if (student1 > 10) {
		printf ("Re-enter the score for student 1: ");
		scanf ("%d", &student1);
	}
	if (student2 > 10) {
                printf ("Re-enter the score for student 2: ");
                scanf ("%d", &student2);
        }
	if (student3 > 10) {
                printf ("Re-enter the score for student 3: ");
                scanf ("%d", &student3);
        }

	if (student1 >= miniscore) {
		printf ("Student 1 passed the test\n");
	}
	else {
		printf ("Student 1 failed the test\n");
	}
      	if (student2 >= miniscore) {
       		printf ("Student 2 passed the test\n");
       	}
       	else {
               	printf ("Student 2 failed the test\n");
       	}
   	if (student3 >= miniscore) {
              	printf ("Student 3 passed the test\n");
       	}
       	else {
               	printf ("Student 3 failed the test\n");
       	}
	return (0);
}

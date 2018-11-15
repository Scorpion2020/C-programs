#include <stdio.h>

int main()
{
	int studentgrades[100];
	int i;
	float a;
	float b;
	int gotab = 0;

	printf ("Enter value for 'a': ");
	scanf ("%f", &a);
	printf ("Enter value for 'b': ");
        scanf ("%f", &b);

	for (i = 0; i < 100; i++){
		printf ("Enter student grade: ");
		scanf ("%i", &studentgrades[i]);
	}
	for (i = 0; i < 100; i++){
		if (studentgrades[i] == a){
			gotab++;
		}
		else if (studentgrades[i] == b){
			gotab++;
		}
		else if (studentgrades[i] > a && studentgrades[i] < b){
			gotab++;
		}
	}
	printf ("The total number of student that got a between a-b = %i\n", gotab);
	return (0);
}

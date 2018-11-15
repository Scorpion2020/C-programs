#include <stdio.h>

int main() {

	int count = 0;

	while (count <= 127) {
		printf ("%c\t%i\n", count, count);
		++count;
	}
	return (0);
}

#include <locale.h>
#include <stdio.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int a, b,i,j;
	printf("¬ведите а и в\n");
	scanf_s("%i %i", &a, &b);
	for (i = a; i <= b; i++) {
		for (j = 0; j < i; j++) {
			printf("%i ", i);
		}
		printf("\n");
	}

	return 0;
}
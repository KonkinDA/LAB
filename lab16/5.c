#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void) {
	int n,i;
	int* a;
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10;
		printf("%i ", a[i]);
	}
	printf("\n");
	for (i = 1; i < n; i++) {
		if (i % 2 == 1) {
			printf("%i ", a[i]);
		}
	}
	printf("\n");
	for (i = n; i >= 0; i--) {
		if (i % 2 == 0) {
			printf("%i ", a[i]);
		}
	}
	return 0;
}
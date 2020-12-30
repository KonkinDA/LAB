#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void) {
	int n, i, min;
	int* a;
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	printf("Введите N\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		printf("%i ", a[i]);
	}
	min = a[1];
	for (i = 3; i < n; i += 2) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	printf("\n");
	printf("Минимальный элемент = %i", min);
	return 0;
}
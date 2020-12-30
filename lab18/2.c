#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int* a;
	int* b;
	int i, n,s,sr;
	s = 0;
	printf("Введите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	b[0] = 0;
	for (i = 1; i < n; i++) {
		s = s + a[i];
		sr = s / i;
		b[i] = sr;
	}
	printf("Массив А\n");
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("Массив B\n");
	for (i = 0; i < n; i++) {
		printf("%i ", b[i]);
	}
	return 0;
}
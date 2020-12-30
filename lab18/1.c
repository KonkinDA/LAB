#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int* a;
	int* b;
	int n,i,temp;
	srand(time(NULL));
	printf("Введите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	b = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		b[i] = rand() % 100;
	}
	for (i = 0; i < n; i++) {
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
	printf("Изменённый массив А\n");
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\nИзменённый массив B\n");
	for (i = 0; i < n; i++) {
		printf("%i ", b[i]);
	}
	return 0;
}
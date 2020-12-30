#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int* a;
	int i, n, temp;
	temp = 0;
	printf("Введите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
		printf("%i ", a[i]);
		if (a[i] % 2 != 0) {
			temp = a[i];
		}
	}
	printf("\n");
	if (temp == 0) {
		printf("В массиве нет нечетных чисел");
	}
	else {
		for (i = 0; i < n; i++) {
			if (a[i] % 2 != 0) {
				a[i] = a[i] + temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	return 0;
}
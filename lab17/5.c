#include <stdio.h>
#include <locale.h>
int main(void) {
	int n, i,j,x;
	int* a;
	setlocale(LC_ALL, "Rus");
	printf("Введите N\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("Заполните массив\n");
	for (i = 0; i < n; i++) {
		scanf_s("%i", &a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				x = a[j];
				a[j] = a[j + 1];
				a[j + 1] = x;
			}
		}
	}
	for (i = 0; i < n-1; i++) {
		if (a[i] == a[i + 1]) {
			printf("%i %i", i,i+1);
		}
	}
	return 0;
}
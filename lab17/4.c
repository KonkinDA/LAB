#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void) {
	int n, i,max;
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
	printf("\n");
	max = a[0];
	for (i = 1; i < n ; i++) {
		if ((a[i] > a[i + 1] && a[i] > a[i - 1])) {
			max = i;
		}
	}
	printf("Номер последнего максимума = %i", max);
	return 0;
}
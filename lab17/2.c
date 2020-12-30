#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int n,i,k,s;
	int* a;
	printf("Введите N\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("Заполните массив\n");
	for (i = 0; i < n; i++) {
		scanf_s("%i", &a[i]);
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	k = a[1] - a[0];
	s = 0;
	for (i = 0; i < n-1; i++) {
		if ((a[i + 1] - a[i]) == k) {
			s++;
		}
	}
	if (s == n-1) {
		printf("Элементы массива образуют прогрессию, k = %i", k);
	}
	else {
		printf("0");
	}
	return 0;
}
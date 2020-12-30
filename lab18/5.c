#include <stdio.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int* a;
	int n, i,temp;
	printf("Введите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	printf("Заполните массив\n");
	for (i = 0; i < n; i++) {
		scanf_s("%i", &a[i]);
	}
	for (i = 0; i < n-1; i++) {
		if (a[i] > a[i + 1]){
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		else {
			break;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	return 0;
}
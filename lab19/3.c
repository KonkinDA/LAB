#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int* a;
	int* b;
	int i, n, min, max,k,j;
	printf("¬ведите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	min = a[0];
	max = a[0];
	k = 0;
	for (i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	for (i = 1; i < n; i++) {
		if (a[i] > max) {
				max = a[i];
			}
		}
	for (i = 0; i < n; i++) {
		if ((a[i] == min) || (a[i] == max)) {
			k++;
		}
	}
	j = n + k;
	b = (int*)malloc((n+k) * sizeof(int));
	k = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == min) {
			b[k] = 0;
			k++;
			b[k] = a[i];
		}
		if (a[i] == max) {
				b[k] = a[i];
				k++;
				b[k] = 0;
		}
		if ((a[i] != min) && (a[i] != max)) {
			b[k] = a[i];
		}
		k++;
	}
	for (i = 0; i < j ; i++) {
		printf("%i ", b[i]);
	}



	return 0;
}
#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	int* a;
	int i, n,min,max,ni,nj;
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	printf("¬ведите n\n");
	scanf_s("%i", &n);
	ni = 0;
	nj = 0;
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
	for (i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
			ni = i;
		}
	}
	for (i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			nj = i;
		}
	}
	if (ni < nj) {
		for (i = ni + 1; i < nj; i++) {
			a[i] = 0;
		}
	}
	else {
		for (i = nj + 1; i < ni; i++) {
			a[i] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}

	return 0;
}
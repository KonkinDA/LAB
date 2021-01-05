#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int a[] = {1,1,1,2,2,2,3,3,3};
	int* b;
	int i, n, k;
	/*printf("¬ведите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}*/
	n = sizeof(a)/sizeof(int);
	k = 0;
	i = 0;
	while (i < n) {
		if (a[i] == a[i+1]) {
			while ((a[i] == a[i+1])) {
				i++;
			}
			i++;
		}
		else {
			i++;
		}
		k++;
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	b = (int*)malloc(k * sizeof(int));
	for (i = 0, k = 0; i < n; i++) {
		if (a[i] != a[i + 1]) {
			b[k] = a[i];
			k++;
		}
	}
	for (i = 0; i < k; i++) {
		printf("%i ", b[i]);
	}

	return 0;
}
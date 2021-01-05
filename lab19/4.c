#include <stdio.h>
#include <time.h>
#include <locale.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int* a;
	int* b;
	int n, i,k,j;
	printf("¬ведите n\n");
	scanf_s("%i", &n);
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 200-100;
	}
	for (i = 0; i < n; i++) {
		printf("%i ", a[i]);
	}
	printf("\n");
	k = 0;
	for (i = 0; i < n; i++) {
		if (a[i] < 0) {
			k++;
		}
	}
	j = k + n;
	b = (int*)malloc(j * sizeof(int));
	k = 0;
	for (i = 0; i < n; i++) {
		if (a[i] < 0) {
			b[k] = a[i];
			k++;
			b[k] = 0;
		}
		else {
			b[k] = a[i];
		}

		k++;
	}

	for (i = 0; i < j; i++) {
		printf("%i ", b[i]);
	}




	return 0;
}
#include <stdio.h>
#include <locale.h>
#include <time.h>
int main(void) {
	int n, i, k, l;
	int* a;
	float s;
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N, K, L\n");
	scanf_s("%i %i %i", &n, &k, &l);
	s = 0;
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand() % 10;
		printf("%i ", a[i]);
	}
	printf("\n");
	for (i = k-1; i <= l-1; i++) {
		s = s + a[i];
		printf("%.2f ", s);
	}
	printf("\n");
	s = (float)s / (l-k+1);
	printf("%.2f", s);
	return 0;
}
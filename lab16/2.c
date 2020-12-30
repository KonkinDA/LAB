#include <locale.h>
#include <stdio.h>
#include <math.h>
int main(void) {
	int n, a,d,i;
	int* b;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N, A и D\n");
	scanf_s("%i %i %i", &n, &a, &d);
	b = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		b[i] = a * pow(a, i);
	}
	for (i = 0; i < n; i++) {
		printf("%i\n", b[i]);
	}

	return 0;
}
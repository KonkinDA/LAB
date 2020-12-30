#include <locale.h>
#include <stdio.h>
int main(void) {
	int a, b, n,i;
	int* c;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N, A и B\n");
	scanf_s("%i %i %i", &n, &a, &b);
	c = (int*)malloc(n * sizeof(int));
	c[0] = a;
	c[1] = b;
	for (i = 2; i < n; i++) {
		c[i] = c[i - 1] + c[i - 2];
	}
	for (i = 0; i < n; i++) {
		printf("%i\n", c[i]);
	}
	return 0;
}
#include <locale.h>
#include <stdio.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int n,i;
	float k;
	k = 1;
	printf("¬ведите N\n");
	scanf_s("%i", &n);
	for (i = 0; i <= n; i++) {
		k = k * (1+(float)i/10);
		printf("%.2f\n", k);
	}

	return 0;
}
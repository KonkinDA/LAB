#include <locale.h>
#include <stdio.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	int N,i;
	int a;
	a = 0;
	printf("¬ведите N\n");
	scanf_s("%i", &N);
	for (i = 1; i <= N; i++) {
		a = a + (2 * i - 1);
		printf("s = %i\n", a);
	}
	return 0;
}
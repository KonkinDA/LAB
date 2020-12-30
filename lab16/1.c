#include <locale.h>
#include <stdio.h>
#include <malloc.h>
int main(void) {
	int N,k,i;
	int *a;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N\n");
	scanf_s("%i", &N);
	k = 1;
	i = 0;
	a = (int*)malloc(N * sizeof(int));
	for (i = 0; i < N; i++)
	{
		a[i] = k;
		k = k + 2;
	}
	for (i = 0; i < N; i++) {
		printf("%i\n", a[i]);
	}
	return 0;
}
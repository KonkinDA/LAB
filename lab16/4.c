#include <time.h>
#include <stdio.h>
#include <locale.h>
int main(void) {
	int n,i;
	int* a;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите N\n");
	scanf_s("%i", &n);
	srand(time(NULL));
	a = (int*)malloc(n * sizeof(int));
	for (i = 0; i < n; i++) {
		a[i] = rand()%100;
		printf("%i\n", a[i]);
	}
	printf("\n");
	for (i = 0; i <n; i++) {
		printf("%i\n", a[i]);
		printf("%i\n", a[n - i-1]);
		if (n-i-3 < i) {
			break;
		}
	}
	return 0;
}
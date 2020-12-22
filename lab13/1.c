#include <locale.h>
#include <stdio.h>
int main(void) {
	float n,k,s;
	int i;
	setlocale(LC_ALL, "Rus");
	k = 0.1;
	printf("¬ведите стоимость\n");
	scanf_s("%f", &n);
	for (i = 0; i < 10; i++) {
		s = n * k;
		k = k + 0.1;
		printf("%.2f \n", s);
	}

	return 0;
}

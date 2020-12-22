#include <locale.h>
#include <stdio.h>
#include <math.h>
int main(void) {
	float a,s;
	int n,i;
	s = 1;
	setlocale(LC_ALL, "Rus");
	printf("Введите число А и степень N\n");
	scanf_s("%f %i", &a, &n);
	for (i = 1; i <= n; i++) {
		s = s + pow(a, i);
		printf("%.2f\n", s);
	}
	return 0;
}
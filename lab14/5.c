#include <locale.h>
#include <stdio.h>
int main(void) {
	int a, b;
	setlocale(LC_ALL, "Rus");
	printf("Введите числа a и b\n");
	scanf_s("%i %i", &a, &b);
	while ((a != 0) && (b != 0)) {
		if (a > b) {
			a = a % b;
		}
		else {
			b = b % a;
		}
	}
	a = a + b;
	printf("НОД = %i", a);
	return 0;
}
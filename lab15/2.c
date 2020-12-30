#include <stdio.h>
#include <locale.h>

int Sign(float x) {
	if (x < 0) {
		return (-1);
	}
	if (x == 0) {
		return (0);
	}
	if (x > 0) {
		return (1);
	}
}

int main(void) {
	setlocale(LC_ALL, "Rus");
	float A, B;
	int c;
	printf("Введите числа А и В\n");
	scanf_s("%f %f", &A, &B);
	c = Sign(A) + Sign(B);
	printf("%i", c);
	return 0;
}
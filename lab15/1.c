#include <stdio.h>
#include <locale.h.>
float PowerA3(float A) {
	float B;
	B = A * A * A;
	return (B);
}

int main(void) {
	setlocale(LC_ALL, "Rus");
	float B;
	printf("¬ведите число дл€ возведени€ в степень\n");
	scanf_s("%f", &B);
	B = PowerA3(B);
	printf("%.3f", B);
	return 0;
}
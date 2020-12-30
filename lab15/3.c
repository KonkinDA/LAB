#include <stdio.h>
#include <locale.h>
float RingS(float R1, float R2) {
	float s, p = 3.14;
	s = p * R1 * R1 - p * R2 * R2;
	return(s);
}
int main(void) {
	float R1, R2,S;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите радиусы R1 и R2\n");
	scanf_s("%f %f", &R1, &R2);
	S = RingS(R1, R2);
	printf("S = %.2f", S);
	return 0;
}
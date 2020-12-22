#include <locale.h>
#include <stdio.h>
int main(void) {
	setlocale(LC_ALL, "Rus");
	float s,m,p;
	int k;
	printf("¬ведите p\n");
	scanf_s("%f", &p);
	m = 1 + p / 100;
	k = 0;
	s = 1000;
	while (s <= 1100) {
		s = s * m;
		k++;
	}
	printf("k = %i\ns=%.2f", k, s);
	return 0;
}
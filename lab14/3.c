#include <locale.h.>
#include <stdio.h.>
int main(void) {
	int n, k, s, i;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите число N\n");
	scanf_s("%i", &n);
	s = 0;
	k = 0;
	i = 1;
	while (s < n) {
		k = k + i;
		s = s + k;
		i++;
	}
	printf("k = %i\ns = %i", k, s);
	return 0;
}
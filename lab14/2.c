#include <locale.h>
#include <stdio.h>
int main(void) {
	int a, b,r,i,j,k;
	setlocale(LC_ALL, "Rus");
	printf("¬ведите а и в\n");
	scanf_s("%i %i", &a, &b);
	r = a - b;
	i = 0;
	j = 0;
	k = 0;
	while (j <= b) {
		j++;
	}
	while (r <= a) {
		r++;
	}
	while (i <= r) {
		i = i + j;
		k++;
	}
	printf("k = %i", k);
	return 0;
}
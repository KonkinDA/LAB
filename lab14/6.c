#include <locale.h>
#include <stdio.h>
int main(void) {
	int n,k,a,b;
	setlocale(LC_ALL, "Rus");
	printf("������� ����� N\n");
	scanf_s("%i", &n);
	k = 2;
	a = 1;
	b = 1;
	while (n>a) {
		b = a + b;
		a = b - a;
		k++;
	}
	printf("���������� ����� = %i", k);
	return 0;
}
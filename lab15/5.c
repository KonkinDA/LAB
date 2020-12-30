#include <stdio.h>
#include <locale.h>
float Fact2(int N) {
	int i,s;
	s = 1;
	i = 1;
	if (N % 2 == 0) {
		i = i + 1;
		while (i<=N){
			s = s * i;
			i = i + 2;
		}
	}
	else {
		while (i <= N) {
			s = s * i;
			i = i + 2;
		}
	}
	return (s);
}
int main(void) {
	int N,s;
	setlocale(LC_ALL, "Rus");
	printf("Введите N\n");
	scanf_s("%i", &N);
	s = Fact2(N);
	printf("Факториал = %i", s);
	return 0;
}
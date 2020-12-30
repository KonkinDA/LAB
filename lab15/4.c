#include <locale.h>
#include <stdio.h>
int Quarter(float x, float y) {
	int c;
	if ((x > 0) && (y > 0)) {
		c = 1;
	}
	if ((x < 0) && (y > 0)) {
		c = 2;
	}
	if ((x < 0) && (y < 0)) {
		c = 3;
	}
	if ((x > 0) && (y < 0)) {
		c = 4;
	}
	return (c);
}
int main(void) {
	float x, y;
	int c;
	setlocale(LC_ALL, "Rus");
	printf("Введите х и у\n");
	scanf_s("%f %f", &x, &y);
	c = Quarter(x, y);
	printf("Координатная четверть №%i", c);
	return 0;
}
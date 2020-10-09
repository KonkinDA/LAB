#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
  int a, b, c, ab, bc, sum;
  setlocale(LC_ALL, "Rus");
  printf("Введите координаты точек А В С\n");
  scanf("%i %i %i", &a, &b, &c);
  ab = abs (a-c);
  bc = abs (b-c);
  sum = ab+bc;
  printf("AC = %i\n", ab);
  printf("BC = %i\n", bc);
  printf("Сумма = %i\n", sum);
  return 0;
}
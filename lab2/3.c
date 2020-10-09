#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
  int a, b, c, d;
  setlocale(LC_ALL, "Rus");
  printf("Введите координаты точек А В С\n");
  scanf("%i %i %i", &a, &b, &c);
  d = abs(c-a)*abs(b-c);
  printf("Произведение длин отрезков AC и BC = %i", d);
  return 0;
}
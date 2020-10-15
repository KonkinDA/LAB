#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
  int x, x2, x1, z;
  setlocale(LC_ALL, "Rus");
  printf("Функция 3x^6 − 6x^2 − 7\n");
  printf("Введите значение x\n");
  scanf("%i", &x);
  x2 = pow (x, 6);
  x1 = pow (x, 2);
  z = 3*x2 - 6*x1 - 7;
  printf("3x^6 − 6x^2 − 7 = %i", z);
  return 0;
}
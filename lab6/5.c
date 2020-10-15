#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
  int x, x6, x2, z;
  setlocale(LC_ALL, "Rus");
  printf("Функция 4(x-3)^6 − 7(x-3)^3 + 2\n");
  printf("Введите значение x\n");
  scanf("%i", &x);
  x6 = pow (x-3, 6);
  x2 = pow (x-3, 3);
  z = 4*x6 - 7*x2 + 2;
  printf("4(x-3)^6 − 7(x-3)^3 + 2 = %i", z);
  return 0;
}
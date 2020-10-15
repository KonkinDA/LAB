#include <stdio.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "Rus");
  int a, b, c;
  printf("Введите значения a и b\n");
  scanf("%i %i", &a, &b);
  c = a;
  a = b;
  b = c;
  printf("a = %i\n", a);
  printf("b = %i ", b);
  return 0;
}
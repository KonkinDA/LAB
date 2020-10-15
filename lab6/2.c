#include <stdio.h>
#include <locale.h>
int main(void) {
  int a, b, c, d;
  setlocale(LC_ALL, "Rus");
  printf("Введите значения переменных a, b, c\n");
  scanf("%i %i %i", &a, &b, &c);
  d = a;
  a = c;
  c = b;
  b = d;
  printf("a = %i\n", a);
  printf("b = %i\n", b);
  printf("c = %i", c);
  return 0;
}
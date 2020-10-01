#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  float a, b, s, r, p, c;
  printf("Введите a и b \n");
  scanf("%f", &a);
  scanf("%f", &b);
  a = fabsf(a);
  b = fabsf(b);
  s = a+b;
  printf("Сумма = %.0f\n", s);
  r = a-b;
  printf("Разность = %.0f\n", r);
  p = a*b;
  printf("Произведение = %.0f\n", p);
  c = a/b;
  printf("Частное = %.2f", c);
  return 0;
}
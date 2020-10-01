#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  float a, b, s, r, p, c;
  printf("Введите а и b \n");
  scanf("%f", &a);
  scanf("%f", &b);
  s = a*a + b*b;
  printf("Сумма = %.0f\n", s);
  r = a*a - b*b;
  printf("Разность = %.0f\n", r);
  p = a*a*b*b;
  printf("Произведение = %.0f\n", p);
  c = (a*a)/(b*b);
  printf("Частное = %.2f\n", c);
  return 0;
}
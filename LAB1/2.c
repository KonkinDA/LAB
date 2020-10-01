#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  float l, p, d;
  p=3.14;
  printf("Введите диаметр\n");
  scanf("%f", &d);
  l=p*d;
  printf("L = %.2f", l);
  return 0;
}
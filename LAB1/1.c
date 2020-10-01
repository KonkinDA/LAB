#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a, b, S, P;
  printf("Введите стороны a и b \n");
  scanf("%d", &a);
  scanf("%d", &b);
  S = a*b;
  P = 2*(a+b);
  printf("Площадь = %d\n", S);
  printf("Периметр = %d", P);
  return 0;
}
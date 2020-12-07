#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a, b, k;
  printf("Введите a и b\n");
  scanf("%i %i", &a, &b);
  k = a/b;
  printf("Количество отрезков = %i", k);
  return 0;
}
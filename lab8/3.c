#include <stdio.h>
#include <locale.h>
int main(void) {
  int a, b, ost;
  setlocale(LC_ALL, "Rus");
  printf("Введите a и b\n");
  scanf("%i %i", &a, &b);
  ost = a%b;
  printf("Остаток = %i", ost);
  return 0;
}
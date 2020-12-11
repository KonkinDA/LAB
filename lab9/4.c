#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a, b, c;
  printf("Введите A, B, C\n");
  scanf("%i %i %i", &a, &b, &c);
  a = a/c;
  b = b/c;
  c = a*b;
  printf("Количество квадратов = %i", c);
  return 0;
}
#include <stdio.h>
#include <locale.h>
int main(void) {
  int a,b,c;
  printf("Введите числа A, B, C\n");
  scanf("%i %i %i", &a, &b, &c);
  if ((a<b) && (b<c))
    printf("Выражение истино");
  else
    printf("Высказывание неверно");
  return 0;
}
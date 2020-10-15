#include <stdio.h>
#include <locale.h>
int main(void) {
  int A, x, y;
  setlocale(LC_ALL, "Rus");
  printf("Введите A\n");
  scanf("%i", &A);
  x = A*A;
  y = x*A;
  A = x*y;
  A = A*A*A;
  printf("%i", A);
  return 0;
}
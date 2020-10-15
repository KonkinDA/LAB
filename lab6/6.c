#include <stdio.h>
#include <locale.h>
int main(void) {
  int A, x;
  setlocale(LC_ALL, "Rus");
  printf("Введите число A\n");
  scanf("%i", &A);
  x = A*A;
  A = x*x;
  A = A*A;
  printf("%i", A);
  return 0;
}
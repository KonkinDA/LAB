#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,b;
  float x;
  printf("Ведите коэффиценты A и B\n");
  scanf("%i %i", &a, &b);
  x = (float)-b/a;
  printf("X = %.2f", x);
  return 0;
}
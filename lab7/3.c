#include <stdio.h>
#include <locale.h>
int main(void) {
  int x, a, y;
  float st, sum;
  setlocale(LC_ALL, "Rus");
  printf("Введите значения X, A, Y\n");
  scanf("%i %i %i", &x, &a, &y);
  st = (float)a/x;
  sum = st*y;
  printf("1кг конфет стоит %.2fруб. %iкг стоит %.2fруб.", st, y, sum);
  return 0;
}
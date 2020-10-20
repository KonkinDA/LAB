#include <stdio.h>
#include <locale.h>

int main(void) {
  float P, RAD;
  int x;
  setlocale(LC_ALL, "Rus");
  P = 3.14;
  printf("Введите значение угла в градусах\n");
  scanf("%i", &x);
  RAD = (x*P)/180;
  printf("Угол в радианах равен %.3f", RAD);
  return 0;
}
#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  float rad, g, p;
  p = 3.14;
  printf("Введите угол в радианах\n");
  scanf("%f", &rad);
  g = (rad*180)/p;
  printf("Угол в градусах равен %.3f", g);
  return 0;
}
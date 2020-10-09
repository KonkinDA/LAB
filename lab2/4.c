#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void) {
  int x1,x2,y1,y2, sx, sy, s, p;
  setlocale(LC_ALL, "Rus");
  printf("Введите координаты х и у первой точки\n");
  scanf("%i %i", &x1, &y1);
  printf("Введите координаты х и у второй точки\n");
  scanf("%i %i", &x2, &y2);
  sx = abs(x1-x2);
  sy = abs (y1-y2);
  s = sx*sy;
  p = 2*sx + 2*sy;
  printf("Площадь = %i\n", s);
  printf("Периметр = %i", p);
  return 0;
}
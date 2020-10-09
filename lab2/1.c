#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
  int x1,x2,y1,y2;
  float d;
  setlocale(LC_ALL, "Rus");
  printf("Введите координаты х и у первой точки\n");
  scanf("%i %i", &x1, &y1);
  printf("Введите координаты х и у второй точки\n");
  scanf("%i %i", &x2, &y2);
  d = sqrt((abs(x1-x2)*abs(x1-x2))+abs(y1-y2)*abs(y1-y2));
  printf("Расстояние равно %.2f", d);
  return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int x1, x2, x3, y1, y2, y3;
  float s1, s2, s3, S, p;
  printf("Введите координаты х и у первой точки\n");
  scanf("%i %i", &x1, &y1);
  printf("Введите координаты х и у второй точки\n");
  scanf("%i %i", &x2, &y2);
  printf("Введите координаты х и у третей точки\n");
  scanf("%i %i", &x3, &y3);
  s1 = sqrt((abs(x1-x2)*abs(x1-x2))+abs(y1-y2)*abs(y1-y2));
  s2 = sqrt((abs(x2-x3)*abs(x2-x3))+abs(y2-y3)*abs(y2-y3));
  s3 = sqrt((abs(x1-x3)*abs(x1-x3))+abs(y1-y3)*abs(y1-y3));
  printf("%.2f %.2f %.2f\n", s1, s2, s3);
  p = s1 + s2 + s3;
  printf("Перимерт = %.2f\n", p);
  p = p/2;
  S = sqrt(p*(p-s1)*(p-s2)*(p-s3));
  printf("Площадь = %.2f\n", S );
  
  return 0;
}
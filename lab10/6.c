#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,b,c;
  printf("Введите стороны треугольника\n");
  scanf("%i %i %i", &a, &b, &c);
  if ((a*a+b*b==c*c) || (b*b+c*c==a*a) || (a*a+c*c==b*b))
    printf("Прямоугольник является прямоугольным");
  else
    printf("Прямоугольник не является прямоугольным");
  return 0;
}
#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,x1,x2,x3,y1,y2,y3;
  float b,c;
  printf("Введите x и y точки A\n");
  scanf("%i %i", &x1, &y1);
  printf("Введите x и y точки B\n");
  scanf("%i %i", &x2, &y2);
  printf("Введите x и y точки C\n");
  scanf("%i %i", &x3, &y3);
  b = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  c = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
  if (b>c){
    printf("Точка C ближе, расстояние = %.2f", c);
  }
  if (c>b){
    printf("Точка B ближе, расстояние = %.2f", b);
  }
  if (b==c){
    printf("Точки равноудалены, расстояние = %.2f", b);
  }
  return 0;
}
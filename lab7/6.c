#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  float x, y, a1, a2, b1, b2, c1, c2;
  printf("Введите a1, a2, b1, b2, c1, c2 \n");
  scanf("%f %f %f %f %f %f", &a1, &a2, &b1, &b2, &c1, &c2);
  x = (c1-(b1*c2/b2))/(a1-(a2*b1/b2));
  y = (c1-a1*x)/b1;
  printf("x = %.2f\ny = %.2f", x, y);
  return 0;
}
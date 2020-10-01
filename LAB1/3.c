#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
 float a,b,c;
 printf("Введите a и b\n");
 scanf("%f", &a);
 scanf("%f", &b);
 c=(a+b)/2;
 printf("Ср. арф. = %.2f", c);
  return 0;
}
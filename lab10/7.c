#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,b,c;
  printf("Введите стороны A, B, C\n");
  scanf("%i %i %i", &a, &b, &c);
  if ((c<a+b) && (b<a+c) && (a<b+c))
    printf("Существует треугольник с данными сторонами");
  else
    printf("Такой треугольник не существует");
  return 0;
}
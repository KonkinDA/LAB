#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int v1, v2, s1, t, s2;
  printf("Введите скорость v1 и v2 (км/ч)\n");
  scanf("%i %i", &v1, &v2);
  printf("Введите начальное расстояние между автомобилями и время(в часах)\n");
  scanf("%i %i", &s1, &t);
  s2 = s1 + (v1+v2)*t;
  printf("Расстояние между автомобилями будет равно %iкм", s2);
  return 0;
}
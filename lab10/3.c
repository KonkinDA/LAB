#include <stdio.h>
#include <locale.h>
int main(void) {
  int a;
  setlocale(LC_ALL, "Rus");
  printf("Введите число\n");
  scanf("%i", &a);
  if ((a%2==0) && (a/10>=1) && (a/10<=9))
    printf("Высказывание истино");
  else
    printf("Высказывание неверно");
  return 0;
}
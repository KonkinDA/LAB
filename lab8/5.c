#include <stdio.h>
#include <locale.h>
int main(void) {
  int a, b;
  setlocale(LC_ALL, "Rus");
  printf("Введите трехзначное число\n");
  scanf("%i", &a);
  b = a/100;
  a = (a%100)*10 + b;
  printf("%i", a);
  return 0;
}
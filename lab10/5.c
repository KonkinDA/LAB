#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,b,c,d;
  printf("Введите число\n");
  scanf("%i", &a);
  b = a/100;
  c = a%100;
  d = c%10*10;
  c = c/10;
  c = d+c;
  if (b==c)
    printf("Высказывание истино");
  else 
    printf("Высказывание ложно");
  return 0;
}
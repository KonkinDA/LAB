#include <stdio.h>
#include <locale.h>
int main(void) {
  int a,b;
  printf("Введите числа A и B\n");
  scanf("%i %i", &a, &b);
  if ((a>2) && (b<=3))
    printf("Высказывание верно");
  else 
    printf("Высказывание неверно");

  
  return 0;
}
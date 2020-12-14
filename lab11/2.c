#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a,b,c;
  printf("Введите чиста a, b, c\n");
  scanf("%i %i %i", &a, &b, &c);
  if (((a+b)>(a+c)) && ((a+b)>(b+c))){
    c = a+b;
    printf("Сумма = %i", c);
  }
  else {
    if ((a+c)>(b+c)){
      b = a+c;
      printf("Сумма = %i", b);
    }
    else{
    a = b+c;
    printf("Сумма = %i", a);
    }
  }
  return 0;
}
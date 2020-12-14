#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a, b;
  printf("Введите a и b\n");
  scanf("%i %i", &a, &b);
  if (a==b) {
    a = 0;
    b = 0;
  }
  else {
    if (a>b){
      b = a;

    }
    else {
      a = b;
    }
  }
  printf("a = %i; b = %i", a, b);
  return 0;
}
#include <stdio.h>
#include <locale.h>
int main(void) {
  int a, b;
  setlocale(LC_ALL, "Rus");
  printf("Введите двухзначное число\n");
  scanf("%i", &a);
  b = a%10;
  a = (a/10)+(b*10);
  printf("%i", a);
  return 0;
}
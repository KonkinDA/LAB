#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int a;
  printf("Введите число\n");
  scanf("%i", &a);
  if (a==0) {
    printf("Нулевое число");
  }
  else {
  if(a>0) {
    printf("Положительное ");
  }
  else {
    printf("Отрицательное ");
  }
  if (a%2==0) {
    printf("четное число");
  }
  else{
    printf("нечетное число");
  }
  }
  return 0;
}
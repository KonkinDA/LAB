#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL,"Rus");
  int a;
  printf("Введите число\n");
  scanf("%i", &a);
  if (a==0) {
    printf("Нулевое число");
  }
  else{
    if (a>99){
      printf("Трехзначное ");
    }
    if ((a<100)&&(a>9)){
      printf("Двухзначное ");
    }
    if (a<10){
      printf("Однозначное ");
    }
    if (a%2==0) {
      printf("четное число");
    }
    else {
    printf("нечётное число");
    }
  }
  return 0;
}
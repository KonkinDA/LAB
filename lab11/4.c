#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int x,y;
  printf("Введите x и y \n");
  scanf("%i %i", &x, &y);
  if ((x>0)&&(y>0)){
    printf("Первая четверть");
  }
  if ((x<0)&&(y>0)){
    printf("Вторая четверть");
  }
  if ((x<0)&&(y<0)){
    printf("Третья четверть");
  }
  if ((x>0)&&(y<0)){
    printf("Четвёртая четверть");
  }
  return 0;
}
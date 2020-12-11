#include <stdio.h>
#include <locale.h>
int main(void) {
  int a;
  printf("Введите количество секунд\n");
  scanf("%i", &a);
  a = a%60;
  printf("Количетсво секунд с последней минуты %i", a);
  return 0;
}
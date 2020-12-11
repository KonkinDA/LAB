#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int g;
  printf("Введите номер года\n");
  scanf("%i", &g);
  if (g%100 == 0){
    g = g/100;
  }
 else {
    g = g/100+1;
  }
  printf("Номер столетия = %i", g);
  return 0;
}
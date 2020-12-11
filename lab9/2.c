#include <stdio.h>
#include <locale.h>
int main(void) {
  int k;
  setlocale(LC_ALL, "Rus");
  printf("Введите чисто K\n");
  scanf("%i", &k);
  k = k%7;
  if (k == 0){
    k=7;
  }
  printf ("%i день недели", k);
  return 0;
}
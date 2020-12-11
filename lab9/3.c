#include <stdio.h>
#include <locale.h>
int main(void) {
  setlocale(LC_ALL, "Rus");
  int k,n;
  printf("Введите к и n\n");
  scanf("%i %i", &k, &n);
  k = ((k%7)+n-1)%7;
   if (k == 0){
    k=7;
  }
  printf ("%i день недели", k);
  return 0;
}
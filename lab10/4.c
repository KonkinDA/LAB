#include <stdio.h>
#include <locale.h>
int main(void) {
  int k,a,b,c;
  setlocale(LC_ALL, "Rus");
  printf("Введите число\n");
  scanf("%i", &k);
  a = k/100;
  b = (k/10)%10;
  c = k%10;
  if ((c == b+1)&&(b == a+1)){
    printf("Данное число образует возрастающую последовательность");
  }
  else if ((c == a-2)&&(b == a-1)){
    printf("Данное число образует убывающую последовательность");
  }
  else{
    printf("Данное число не образует никаких последовательностей");
  }
  return 0;
}
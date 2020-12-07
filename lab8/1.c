#include <stdio.h>
#include <locale.h>
int main(void) {
  int i;
  setlocale(LC_ALL, "Rus");
  printf("Введите размер файла в килобайтах\n");
  scanf("%i", &i);
  i = i/1024;
  printf("Размер файла в килобайтах = %i", i);
  return 0;
}
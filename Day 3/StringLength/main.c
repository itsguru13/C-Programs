#include<stdio.h>

int main() {
  char str[20], *pt;
  int i = 0;
  printf("Enter String: ");
  gets(str);
  pt = str;
  while (*pt != '\0') {
    i++;
    pt++;
  }
  printf("Length of String : %d \n", i);

  return 0;
}
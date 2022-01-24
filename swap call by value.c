#include <stdio.h>

void swap (int a, int b) {

  int c;

  c = a;
  a = b;
  b = c;

  printf("After awap a = %d b = %d", a ,b);

}

int main(void) {

  int a, b;

  printf("Enter a and b values: \n");
  scanf("%d %d",&a,&b);
  swap(a,b);
  return 0;
}

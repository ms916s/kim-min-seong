#include <stdio.h>

int add(int a) {
  a += 100;
  return a;
}

int main(void) {
  int a;
  printf("���� �Է��Ͻÿ� : ");
  scanf("%d", &a);
  printf("%d\n", a);
  a = add(a);
  printf("%d", a);
  return 0;
}

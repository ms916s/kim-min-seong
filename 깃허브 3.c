#include <stdio.h>

int main(void) {
  int k;
  int l;
  while(1) {
    printf("k���� �Է��Ͻÿ� : ");
    scanf("%d", &k);
    printf("l���� �Է��Ͻÿ� : ");
    scanf("%d", &l);
    if(k > l) {
      printf("�� ū���� k���� %d�Դϴ�\n", k);
    }
    else if(k < l) {
      printf("�� ���� l���� %d�Դϴ�\n", l);
    }
    else {
      printf("k���� l���� �����ϴ�\n");
    }
  }
  return 0;
}

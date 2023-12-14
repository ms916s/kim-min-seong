#include <stdio.h>

int main(void) {
  int num[10];
  int sum = 0;
  for(int i = 0; i < 10; i++) {
    printf("수를 입력하시오 : ");
    scanf("%d", &num[i]);
  }
  for(int i = 0; i < 10; i++) {
    sum += num[i];
  }
  printf("합계는 %d입니다", sum);
  return 0;
}

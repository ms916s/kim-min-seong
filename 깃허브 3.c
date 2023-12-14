#include <stdio.h>

int main(void) {
  int k;
  int l;
  while(1) {
    printf("k값을 입력하시오 : ");
    scanf("%d", &k);
    printf("l값을 입력하시오 : ");
    scanf("%d", &l);
    if(k > l) {
      printf("더 큰값은 k값인 %d입니다\n", k);
    }
    else if(k < l) {
      printf("더 값은 l값인 %d입니다\n", l);
    }
    else {
      printf("k값과 l값이 같습니다\n");
    }
  }
  return 0;
}

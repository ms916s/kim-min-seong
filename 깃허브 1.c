#include <stdio.h>

int main(void) {
  char text[10] = {'a','a', 'b', 'c', 'q', 'a', 'f', 'd', 'w', 'g'};
  int count = 0;
  int max = 0;

  for(int i = 0; i < 10; i++) {
    for(int j = 0; j < 10; j++) {
      if(text[i] == text[j]) {
        count++;
      }
    }
    if(count > max) {
      max = count;
    }
    count = 0;
  }
  printf("%d", max);
  return 0;
}

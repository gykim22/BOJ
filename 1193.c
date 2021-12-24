#include <stdio.h>

int main() {
  int N, count = 0, check = 0, turn = 0;
  scanf("%d", &N);
  int i = 1;
  while (1) {
    int k = i;
    for (int j = 1; j <= i; ++j, --k) {
      count++;
      if (N == count && turn == 1) {
        printf("%d/%d", j, k);
        check = 1;
        break;
      }
      if(N == count && turn == 0){
        printf("%d/%d", k, j);
        check = 1;
        break;
      }
    }
    if (check == 1)
      break;
    i++;
    turn++;
    turn%=2;
  }
  return 0;
}

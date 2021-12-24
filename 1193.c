#include <stdio.h>
// https://www.acmicpc.net/problem/1193
int main() {
  int N, count = 0, check = 0, turn = 0;
  scanf("%d", &N);
  int i = 1;
  while (1) {
    int k = i;
    for (int j = 1; j <= i; ++j, --k) { //1~i까지, i~1까지 출력
      count++;
      if (N == count && turn == 1) { // turn 1이라면 1/3 .. 2/2 ... 3/1 이런 식으로 출력
        printf("%d/%d", j, k);
        check = 1;
        break;
      }
      if(N == count && turn == 0){ // turn 0이라면 3/1 ... 2/2 .. 1/3 이런 식으로 출력
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

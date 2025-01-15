#include <stdio.h>

int main() {
  // 문제 - 1부터 100까지의 합을 출력해주세요(개념 : 반복문)
  int sum = 0;
  for (int i = 1; i <= 100; i++) {
    sum += i;
  }
  printf("%d\n", sum);

  // 문제 - 100부터 200까지의 짝수의 합을 출력해주세요(개념 : 반복문, 조건문)
  sum = 0;
  int i = 100;
  while (i <= 200) {
    if (i % 2 == 0) {
      sum += i;
    }
    i++;
  }
  printf("%d\n", sum);

  // 문제 - 음수 200부터 100사이의 짝수 중에서 3의 배수가 아닌 수의 합을 출력해주세요.(개념 : 반복문, 조건문)
  sum = 0;
  for (int i = -200; i <= 100; i++) {
    if (i % 2 == 0 && i % 3 != 0) {
      sum += i;
    }
  }
  printf("%d\n", sum);

  // 문제 - 1000의 모든 약수 출력하기
  i = 1;
  while (i <= 1000) {
    if (1000 % i == 0) {
      printf("%d ", i);
    }
    i++;
  }

  return 0;
}
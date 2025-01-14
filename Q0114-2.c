// 문제 : 할인 대상인지 아닌지 출력해주세요.
// 조건 : 나이가 19세 이하이거나 60세 이상이면 할인 대상입니다.
// 조건 : 출력예시 처럼 출력되어야 합니다.
// 조건 : `구현시작` 부분만 수정 할 수 있습니다.
// 조건 : `&&, ||`없이 풀어야 합니다.

#include <stdio.h>

#pragma warning (disable: 4996)

int main(void) {
  int age;
  printf("나이를 입력해주세요 : ");
  scanf("%d", &age);
  printf("당신의 나이는 %d살 입니다.\n", age);

  // 구현시작

  printf("정답 v1 : if만 사용한 버전\n");   //if 안의 if : 못 풀었다..
  if (age <= 19) {
    printf("할인 대상입니다.");
  }
  if (age >= 60) {
    printf("할인 대상입니다.");
  }
  if (age > 19) {
    if (age < 60) {
      printf("할인 대상이 아닙니다.");
    }
  }

  printf("정답 v2 : if와 else if 만 사용한 버전\n");
  if (age <= 19) {
    printf("할인 대상입니다.");
  }
  else if (age >= 60) {
    printf("할인 대상입니다.");
  }
  else if (age > 19) {
    printf("할인 대상이 아닙니다.");
  }
  

  printf("정답 v3 : if와 else if와 else 사용한 버전\n");
  if (age <= 19) {
    printf("할인 대상입니다.");
  }
  else if (age >= 60) {
    printf("할인 대상입니다.");
  }
  else {
    printf("할인 대상이 아닙니다.");
  }
  // 출력 => 할인대상입니다. 또는 할인 대상이 아닙니다.

  return 0;
}
// 문제 : 구구단 1단을 출력해주세요.
// 조건 : 숫자 1 이외의 값을 사용할 수 없습니다. 소스코드를 수정해주세요.
// 조건 : for, while문을 사용할 수 없습니다.

#include <stdio.h>

#pragma warning (disable: 4996)

int main(void) {
  int dan = 1;
  int i = 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);
  i += 1;
  printf("%d * %d = %d\n", dan, i, dan * i);



  // 문제 : 구구단 1단을 출력해주세요.
// 조건 : 숫자 1 이외의 값을 사용할 수 없습니다. 소스코드를 수정해주세요.
// 조건 : for, while문을 사용할 수 없습니다.
// 조건 : 1부터 1000까지 곱해주세요.
  dan = 1;
  i = 1;
    // 수정가능지역 시작
  if (i <= 1000) {
    printf("%d * %d = %d\n", dan, i, dan * i);
    i++;
  }
  if (i <= 1000) {
    printf("%d * %d = %d\n", dan, i, dan * i);
    i++;
  }
  if (i <= 1000) {
    printf("%d * %d = %d\n", dan, i, dan * i);
    i++;
  }
  if (i <= 1000) {
    printf("%d * %d = %d\n", dan, i, dan * i);
    i++;
  }
    // 수정가능지역 끝

  return 0;
}
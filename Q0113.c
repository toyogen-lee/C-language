// 문제 : 실행되는 출력문에는 `참` 그렇지 않으면 `거짓` 이라고 적어주세요.
// 조건 : `참1`, `참2`, `거짓1` 이런 순으로 적어주세요.

#include <stdio.h>

int main(void) {
  printf("== 개념시작 ==\n");

  if (1) { // C언어에서 1은 참을 의미 한다.
    printf("참\n");
  }

  if (0) { // C언어에서 0은 거짓을 의미한다.
    printf("거짓\n");
  }

  printf("== 문제시작 ==\n");
  int a = 10;

  // `==` => 같다.
  if (a == 10) {
    printf("참1\n");
  }

  // `!=` => 같지 않다.
  if (a != 10) {
    printf("거짓1\n");
  }

  if (a > 10) {
    printf("거짓2\n");
  }

  if (a >= 10) {
    printf("참2\n");
  }

  int b = 10;

  if (a == b) {
    printf("참3\n");
  }

  // c 에는 1(true) or 0(false) 이 담긴다.
  int c = a != b;

  if (c) {
    printf("거짓3\n");
  }

  if (c == 0) {
    printf("참4\n");
  }

  // `!` => 반전
  if (!c) {
    printf("참5\n");
  }

  if (!(!c)) {
    printf("거짓4\n");
  }

  int d = 1;

  if (c != d) {
    printf("참6\n");
  }

  if (1 == 1 && 2 == 2 && 3 == 3 && 4 != 4) {
    printf("거짓5\n");
  }

  if (10 > 10 || 2 < 1) {
    printf("거짓6\n");
  }

  if (10 > 10 || 2 < 1 && 100 == 100) {
    printf("거짓7\n");
  }

  if (!(10 > 10 || 2 < 1 && 100 == 100)) {
    printf("참7\n");
  }

  return 0;
}
// 문제 : char와 unsigned char의 공간크기를 각각 출력해주세요.
// 힌트 : sizeof(변수) or sizeof(타입)
// 힌트 : sizeof 함수는 해당 매개변수의 공간크기를 반환합니다.
#include <stdio.h>

int main(void) {
  printf("char의 크기 : %lu\n", sizeof(char));
  // char의 크기 : 1
  printf("unsigned char의 크기 : %lu\n", sizeof(unsigned char));
  // unsigned char의 크기 : 1

  char c;
  unsigned char uc;

  printf("c의 크기 : %lu\n", sizeof(c));
  // c의 크기 : 1
  printf("uc의 크기 : %lu\n", sizeof(uc));
  // uc의 크기 : 1

  printf("%lu ", sizeof(int));
  printf("%lu ", sizeof(double));

  return 0;
}
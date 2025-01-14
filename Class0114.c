// 문제 : 1부터 10까지 출력
// 조건 : 1 이외에 다른 숫자 사용 금지

#include <stdio.h>

#pragma warning (disable: 4996)

int main(void) {

  int i = 1;

  printf("%d\n", i);
  i++;

  printf("%d\n", i);
  i++;

  printf("%d\n", i);
  i += 1;

  printf("%d\n", i);
  i += 1;

  printf("%d\n", i);
  i += 1;

  printf("%d\n", i);
  i += 1;

  printf("%d\n", i);
  i++;

  printf("%d\n", i);
  i++;

  printf("%d\n", i);
  i++;

  printf("%d\n", i);
  


  int j = 1;  //증감연산
  int result;
  result = j++;
  printf("result : %d, j : %d\n", result, j);
  result = ++j;
  printf("result : %d, j : %d\n", result, j);


  int dan = 1;  //반복문
  i = 1;
  while (i <= 10) {
    printf("%d * %d = %d\n", dan, i, dan * i);
    i += 1;
  }

  int a = 50;
  while (a >= -50) {
    printf("%d  ", a);
    a--;
  }

  return 0;
}
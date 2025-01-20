// 문제 : 입력받은 정수가 짝수인지 아닌지 판별해주는 함수 구현

#include <stdio.h>

//is_even(int a) {       나 - 실패
//  if (a % 2 == 0) {
//    printf("YES");
//  }
//  else {
//    printf("NO");
//  }
//  }

//is_even(int a) {     //v1
//  if (a % 2 == 0) {
//    return 1;
//  }
//  else {
//    return 0;
//  }
//}

//is_even(int a) {     //v2
//  int result;
//  if (a % 2 == 0) {
//    result = 1;
//  }
//  else {
//    result = 0;
//  }
//  return result;
//}

is_even(int a) {     //v3 ===
  return a % 2 == 0;
}

int main(void) {
  printf("10은(는) 짝수인가요? : %d\n", is_even(10));
  printf("11은(는) 짝수인가요? : %d\n", is_even(11));
  return 0;
}
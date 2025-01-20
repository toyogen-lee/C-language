// 문제 : 입력받은 정수의 모든 약수의 합을 리턴하는 함수 구현
// 조건 : get_divisor_sum 함수를 만들어서 풀어주세요.

#include <stdio.h>
get_divisor_sum(int a) {
  int sum = 0;
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      sum += i;
    }
  }
  return sum;
}

int main(void) {

  int rs;
  rs = get_divisor_sum(4);
  printf("4의 약수의 합 : %d\n", rs);
  // 출력 : 7

  rs = get_divisor_sum(5);
  printf("5의 약수의 합 : %d\n", rs);
  // 출력 : 6

  rs = get_divisor_sum(3);
  printf("3의 약수의 합 : %d\n", rs);
  // 출력 : 4



  return 0;
}


// 문제 : 입력받은 정수가 100보다 크고 200보다 작은지 알려주는 함수 구현

is_bigger_than_100_and_less_than_200(int a) {
  return a > 100 && a < 200;
}

int main(void) {
  printf("128은(는) 100보다 크고 200보다 작습니다. : %d\n", is_bigger_than_100_and_less_than_200(128));
  printf("28은(는) 100보다 크고 200보다 작습니다. : %d\n", is_bigger_than_100_and_less_than_200(28));
  return 0;
}
// ���� : �Է¹��� ������ ��� ����� ȭ�鿡 ������ִ� �Լ� ����

#include <stdio.h>

print_divisors(int a) {
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      printf("%d ", i);
    }
  }
}
int main(void) {

  print_divisors(1000);
  // ��� =>
  /*
  1
  2
  4
  5
  8
  10
  20
  25
  40
  50
  100
  125
  200
  250
  500
  1000
  */

  return 0;
}
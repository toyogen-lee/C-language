// ���� : �Է¹��� ������ ��� ����� ���� �����ϴ� �Լ� ����
// ���� : get_divisor_sum �Լ��� ���� Ǯ���ּ���.

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
  printf("4�� ����� �� : %d\n", rs);
  // ��� : 7

  rs = get_divisor_sum(5);
  printf("5�� ����� �� : %d\n", rs);
  // ��� : 6

  rs = get_divisor_sum(3);
  printf("3�� ����� �� : %d\n", rs);
  // ��� : 4



  return 0;
}


// ���� : �Է¹��� ������ 100���� ũ�� 200���� ������ �˷��ִ� �Լ� ����

is_bigger_than_100_and_less_than_200(int a) {
  return a > 100 && a < 200;
}

int main(void) {
  printf("128��(��) 100���� ũ�� 200���� �۽��ϴ�. : %d\n", is_bigger_than_100_and_less_than_200(128));
  printf("28��(��) 100���� ũ�� 200���� �۽��ϴ�. : %d\n", is_bigger_than_100_and_less_than_200(28));
  return 0;
}
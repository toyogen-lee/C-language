// ���� : ������ 1���� ������ּ���.
// ���� : ���� 1 �̿��� ���� ����� �� �����ϴ�. �ҽ��ڵ带 �������ּ���.
// ���� : for, while���� ����� �� �����ϴ�.

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



  // ���� : ������ 1���� ������ּ���.
// ���� : ���� 1 �̿��� ���� ����� �� �����ϴ�. �ҽ��ڵ带 �������ּ���.
// ���� : for, while���� ����� �� �����ϴ�.
// ���� : 1���� 1000���� �����ּ���.
  dan = 1;
  i = 1;
    // ������������ ����
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
    // ������������ ��

  return 0;
}
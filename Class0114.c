// ���� : 1���� 10���� ���
// ���� : 1 �̿ܿ� �ٸ� ���� ��� ����

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
  


  int j = 1;  //��������
  int result;
  result = j++;
  printf("result : %d, j : %d\n", result, j);
  result = ++j;
  printf("result : %d, j : %d\n", result, j);


  int dan = 1;  //�ݺ���
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
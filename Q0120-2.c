// ���� : �Է¹��� ������ ¦������ �ƴ��� �Ǻ����ִ� �Լ� ����

#include <stdio.h>

//is_even(int a) {       �� - ����
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
  printf("10��(��) ¦���ΰ���? : %d\n", is_even(10));
  printf("11��(��) ¦���ΰ���? : %d\n", is_even(11));
  return 0;
}
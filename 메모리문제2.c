// ���� : char�� unsigned char�� ����ũ�⸦ ���� ������ּ���.
// ��Ʈ : sizeof(����) or sizeof(Ÿ��)
// ��Ʈ : sizeof �Լ��� �ش� �Ű������� ����ũ�⸦ ��ȯ�մϴ�.
#include <stdio.h>

int main(void) {
  printf("char�� ũ�� : %lu\n", sizeof(char));
  // char�� ũ�� : 1
  printf("unsigned char�� ũ�� : %lu\n", sizeof(unsigned char));
  // unsigned char�� ũ�� : 1

  char c;
  unsigned char uc;

  printf("c�� ũ�� : %lu\n", sizeof(c));
  // c�� ũ�� : 1
  printf("uc�� ũ�� : %lu\n", sizeof(uc));
  // uc�� ũ�� : 1

  printf("%lu ", sizeof(int));
  printf("%lu ", sizeof(double));

  return 0;
}
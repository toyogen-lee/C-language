// ���� : ���� a�� b�� ���� ��ü���ּ���.
// ���� : ��¿��ô�� ���;� �մϴ�.

#include <stdio.h>

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a;
	a = 20;

	int b = 40;

	// ������������ ����
	int c;
	c = b;
	b = a;
	a = c;
	// ������������ ��

	printf("== �������� ==\n");

	printf("a : %d\n", a);
	// ��� => a : 40
	printf("b : %d\n", b);
	// ��� => b : 20



	printf("=============================\n");

	printf("%f\n", 10 / 3.0); //%f(float)
	printf("%d\n", 10 >= 3 && 3 == 3); //true(1) false(0)

	//char < short < int < long  /  float < double

	return 0;
}
// ���� : 4Ģ������ �ϴ� 4���� �Լ��� ������ּ���.

#include <stdio.h>

#pragma warning(disable : 4996)

add(int x, int y) {
	return x + y;
}
minus(int x, int y) {
	return x - y;
}
double divide2(int x, double y) {
	return x / y;
}

int main(void) {
	int a = 0;

	a = add(10, 20);
	printf("�� ���� �� : %d\n", a);
	// ��� => �� ���� �� : 30

	a = minus(10, 20);
	printf("�� ���� �� : %d\n", a);
	// ��� => �� ���� �� : -10

	//a = multiply(10, 20);
	//printf("�� ���� �� : %d\n", a);
	//// ��� => �� ���� �� : 200

	//a = divide(40, 20);
	//printf("�� ���� ���� �� : %d\n", a);
	//// ��� => �� ���� ���� �� : 2

	double b = divide2(39, 5);
	printf("�� ���� ���� �� : %f\n", b);
	// ��� => �� ���� ���� �� : 7.800000

	//a = mod(40, 3);
	//printf("�� ���� ���� ������ : %d\n", a);
	//// ��� => �� ���� ���� ������ : 1

	return 0;
}
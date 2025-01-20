// 문제 : 4칙연산을 하는 4개의 함수를 만들어주세요.

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
	printf("두 수의 합 : %d\n", a);
	// 출력 => 두 수의 합 : 30

	a = minus(10, 20);
	printf("두 수의 차 : %d\n", a);
	// 출력 => 두 수의 차 : -10

	//a = multiply(10, 20);
	//printf("두 수의 곱 : %d\n", a);
	//// 출력 => 두 수의 곱 : 200

	//a = divide(40, 20);
	//printf("두 수를 나눈 몫 : %d\n", a);
	//// 출력 => 두 수를 나눈 몫 : 2

	double b = divide2(39, 5);
	printf("두 수를 나눈 몫 : %f\n", b);
	// 출력 => 두 수를 나눈 몫 : 7.800000

	//a = mod(40, 3);
	//printf("두 수를 나눈 나머지 : %d\n", a);
	//// 출력 => 두 수를 나눈 나머지 : 1

	return 0;
}
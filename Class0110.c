// 문제 : 변수 a와 b의 값을 교체해주세요.
// 조건 : 출력예시대로 나와야 합니다.

#include <stdio.h>

#pragma warning(disable : 4996)
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a;
	a = 20;

	int b = 40;

	// 수정가능지역 시작
	int c;
	c = b;
	b = a;
	a = c;
	// 수정가능지역 끝

	printf("== 문제시작 ==\n");

	printf("a : %d\n", a);
	// 출력 => a : 40
	printf("b : %d\n", b);
	// 출력 => b : 20



	printf("=============================\n");

	printf("%f\n", 10 / 3.0); //%f(float)
	printf("%d\n", 10 >= 3 && 3 == 3); //true(1) false(0)

	//char < short < int < long  /  float < double

	return 0;
}
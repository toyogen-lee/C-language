// 문제 : 3가지 다른 방법으로 a부터 z까지 출력하는 함수 구현
// 힌트 : 사실 C언어에서 'a'는 따로 존재하지 않는다. 'a'는 사실 97의 또 다른 이름이다.
// 힌트 : C언어에서 'a'는 97과 완전히 같은 뜻이다.
// 힌트 : C언어에서 'b'는 98과 완전히 같은 뜻이다.

#include <stdio.h>
#pragma warning (disable: 4996)
print_a_to_z_v1(char c) {
	while (c <= 'z') {
		printf("%c", c);
		c += 1;
	}
}
print_a_to_z_v2(char c) {
	for (int i = c; i <= 'z'; i++) {
		printf("%c", i);
	}
}
void print_a_to_z_v3(void) {
	for (char a = 'a'; a < 97 + 26; a++) {
		printf("%c", a);
	}
}

int main(void) {
	printf("== 정답 v1 ==\n");
	print_a_to_z_v1(97);
	printf("== 정답 v2 ==\n");
	print_a_to_z_v2(97);
	printf("== 정답 v3 ==\n");
	print_a_to_z_v3();

	return 0;
}
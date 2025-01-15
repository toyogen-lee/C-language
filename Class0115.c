#include <stdio.h>
int main(void) {
	int i = 1;

	while (i <= 10) {
		printf("%d\n", i);
		i += 1;
	}
	for (int i = 1; i <= 4; i = i + 1) {
		printf("%d\n", i);
	}


	// 문제 - for문을 사용해서 구구단 4단 출력(개념 : for)
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", 4, i, 4 * i);
	}
	// 문제 - 400부터 -200까지 출력해주세요.(개념 : 반복문)
	int j = 400;
	while (j >= 380) { //-200은 너무 많아서
		printf("%d ", j);
		j--;
	}

	return 0;
}
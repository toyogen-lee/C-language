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


	// ���� - for���� ����ؼ� ������ 4�� ���(���� : for)
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", 4, i, 4 * i);
	}
	// ���� - 400���� -200���� ������ּ���.(���� : �ݺ���)
	int j = 400;
	while (j >= 380) { //-200�� �ʹ� ���Ƽ�
		printf("%d ", j);
		j--;
	}

	return 0;
}
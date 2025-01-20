#include <stdio.h>

void print_one_two_three(void) {
	static int a = 1;  //static
	int num = 1;
	a++;
	num++;
	printf("a = %d\n", a);
	printf("num = %d\n", num);

	for (int i = 1; i <= 3; i++) {
		printf("%d\n", i);
	}
}
void p(int a, int b) {
	printf("수정 전 a = %d, b = %d\n", a, b);
	a = 10;
	b = 55;
	printf("수정 후 a = %d, b = %d\n", a, b);
}



int main(void) {

	print_one_two_three();
	print_one_two_three();
	print_one_two_three();

	int x = 1;
	int y = 2;
	p(x, y);

	return 0;
}
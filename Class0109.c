//표준 입출력에 관한 라이브러리
#include <stdio.h>  //std(standard) i(input) o(output)
int main(void) {
	printf("Hello ");

	//printf(25); 불가능
	printf("%d ", 20); //%d(decimal) : 정수
	printf("%d + %d\n", 200, 400); //\n(new line) : 개행문자

	//printf('p'); 불가능
	printf("%c ", 'p'); //%c(character) : 문자

	printf("we live\nwe love\nwe lie");
	printf(" %d ", 'a'); //아스키 코드 : 97 98
	printf(" %d ", 'b');



	int x = 5;
	printf("x : %d\n", x);

	x = 10;
	printf("x : %d\n", x);

	x = x + 20;
	printf("x : %d\n", x);

	return 0;
}
//scanf() : 입력
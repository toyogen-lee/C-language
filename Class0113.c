#include <stdio.h>
int main(void) {

	unsigned char a = 130; //-127 ~ 128 -> 0 ~ 255
	long long b = 220000000;
	printf("%d\n", a);
	printf("%lld\n", b);

	int age = 55;
	if ( age >= 19 ) {
		printf("성인\n");
	}
	if (age < 19) {
		printf("미성년자\n");
	}

	return 0;
}
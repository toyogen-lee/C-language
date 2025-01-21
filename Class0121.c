// ���� : 3���� �ٸ� ������� a���� z���� ����ϴ� �Լ� ����
// ��Ʈ : ��� C���� 'a'�� ���� �������� �ʴ´�. 'a'�� ��� 97�� �� �ٸ� �̸��̴�.
// ��Ʈ : C���� 'a'�� 97�� ������ ���� ���̴�.
// ��Ʈ : C���� 'b'�� 98�� ������ ���� ���̴�.

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
	printf("== ���� v1 ==\n");
	print_a_to_z_v1(97);
	printf("== ���� v2 ==\n");
	print_a_to_z_v2(97);
	printf("== ���� v3 ==\n");
	print_a_to_z_v3();

	return 0;
}
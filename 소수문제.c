// ���� : �Ҽ����� �ƴ��� üũ�ϴ� �Լ� ����

//#include <stdio.h>
//
//#pragma warning (disable: 4996)
//
//is_prime_number(int a) {
//  int count = 0;
//  for (int i = 1; i <= a; i++) {
//    if (a % i == 0) {
//      count++;
//    }
//  }
//  return count == 2;
//}
//
//int main(void) {
//
//  printf("3�� �Ҽ��ΰ���? : %d\n", is_prime_number(3));
//
//  printf("4�� �Ҽ��ΰ���? : %d\n", is_prime_number(4));
//
//  printf("5�� �Ҽ��ΰ���? : %d\n", is_prime_number(5));
//
//  return 0;
//}



// ���� : �Է¹��� ���ڰ� 10�̶�� �Ҷ� 1���� 10 ���̿� �����ϴ� ��� �Ҽ��� ����ϴ� �Լ� ����

//#include <stdio.h>
//
//#pragma warning (disable: 4996)
//
//print_1_to_n_prime_numbers(int a) {
//  for (int i = 1; i <= a; i++) {
//
//    int count = 0;
//
//    for (int j = 1; j <= i; j++) {
//      if (i % j == 0) {
//        count++;
//      }
//    }
//
//    if (count == 2) {
//      printf("%d  ", i);
//    }
//  }
//}
//
//
//int main(void) {
//  print_1_to_n_prime_numbers(10);
//  return 0;
//}



// ���� : n���� m ���̿� �����ϴ� �Ҽ��� ���� ��ȯ�ϴ� �Լ��� ������ּ���.

#include <stdio.h>

#pragma warning(disable : 4996)

get_n_to_m_prime_sum(int a, int b) {
	int sum = 0;
	for (int i = a; i <= b; i++) {
		int result = 1;
		for (int j = 1; j < i; j++) {
			if (j == 1) {
				result = 0;
			}
			else if (i % j == 0) {
				result = 0;
			}
		}
		if (result) {
			sum += i;
		}
	}
	return sum;
}

int main(void) {
	int sum = get_n_to_m_prime_sum(1, 10);
	// 2,3,5,7 => 17

	printf("1���� 10 ������ ��� �Ҽ��� �� : %d\n", sum);
	return 0;
}
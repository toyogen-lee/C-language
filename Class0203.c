// ���� : ������ ���ڸ� 10�� �Է¹޾Ƽ� �迭�� �ֱ�
// ���� : ������ 2���� ������ּ���.
// ���� : ������ ������ �� �� �����ϴ�.

/*
== �Է� ==
1��° ���ڸ� �Է����ּ��� : 1[����]
2��° ���ڸ� �Է����ּ��� : 2[����]
3��° ���ڸ� �Է����ּ��� : 3[����]
4��° ���ڸ� �Է����ּ��� : 4[����]
5��° ���ڸ� �Է����ּ��� : 5[����]
6��° ���ڸ� �Է����ּ��� : 6[����]
7��° ���ڸ� �Է����ּ��� : 7[����]
8��° ���ڸ� �Է����ּ��� : 8[����]
9��° ���ڸ� �Է����ּ��� : 9[����]
10��° ���ڸ� �Է����ּ��� : 10[����]
== ��� ==
1��° �Է¹��� ���� : 1
2��° �Է¹��� ���� : 2
3��° �Է¹��� ���� : 3
4��° �Է¹��� ���� : 4
5��° �Է¹��� ���� : 5
6��° �Է¹��� ���� : 6
7��° �Է¹��� ���� : 7
8��° �Է¹��� ���� : 8
9��° �Է¹��� ���� : 9
10��° �Է¹��� ���� : 10
*/

//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//  int arr[10];
//  int i;
//  for (i = 0; i < 10; i++) {
//    printf("%d��° ���� : ", i + 1);
//    //scanf("%d", (arr + i));  ������ ����
//    scanf("%d", &arr[i]);
//  }
//  for (i = 0; i < 10; i++) {
//    printf("%d��° �Է¹��� ���� : %d\n", (i + 1), arr[i]);
//  }
//  return 0;
//}



// ���� : ������ ���ڸ� 10�� �Է¹޾Ƽ� �迭�� �ֱ�
// ���� : ������ 2���� ������ּ���.
// ���� : �迭 ������ �� �� �����ϴ�.

//#include <stdio.h>
//#pragma warning(disable : 4996)
//
//int main(void) {
//
//  /*int arr[10], i;
//
//  for (i = 0; i < 10; i++) {
//    printf("%d��° : ", i + 1);
//    scanf("%d", (arr + i));
//  }
//  for (i = 0; i < 10; i++) {
//    printf("%d��° : %d\n", (i + 1), *(arr + i));
//  }*/
//
//  int arr[5] = { 9, 77, 3, 4, 5 };
//  int* p = arr;
//
//  printf("bae : %d\n", arr[1]);
//  printf("pointer : %d\n", *p + 1);   //�׳� ����
//  printf("pointer : %d\n", *(p + 1));
//  return 0;
//}



// ���� : �迭�� �Ѽ��ϴ� change �Լ��� ������ּ���.(�迭�� ������)

//#include <stdio.h>
//#pragma warning(disable:4996)
//
//#include <stdbool.h>

//void change(int *p) {
// /* *p *= 2;
//  *(p + 1) *= 2;*/
//  p[0] = 200;
//  p[1] = 400;
//}
//

//bool is_adult_age(int age) {
//  if (age >= 20) {
//    return true;
//  }
//  return false;
//}

//int main() {
//  int x[2] = { 100, 200 };
//  // x : �迭����
//  // x�� ���� �ڵ����� x[0]�� �ּҰ��� ������.
//  // x == &x[0]
//  // x�� Ÿ���� int* �̴�.
//
//  printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
//
//  change(x);
//
//  printf("change �Լ��� ȣ���ϱ� ��, x[0] : %d, x[1] : %d\n", x[0], x[1]);
//  // ��� => change �Լ��� ȣ���ϱ� ��, x[0] : 200, x[1] : 400




  //int i = 0, j = 0, sum = 0;
  //printf("input num : \n");
  //scanf("%d%d", &i, &j);
  //
  ////sum = i + j;

  //printf("%d + %d = %d", i, j, i + j);



 /* bool a = true;
  bool b = false;
  if (a) {
    printf("okay");
  }

  printf("18 age : ", is_adult_age(18));*/



  //char* a = "hello wo\0rld";  //\0 : cut
  //printf("%s\n", a);
  //printf("%c\n", *a);

  //char ch[] = "hello";  //6bite
  //printf("%s\n", ch);
  //printf("%c\n", *ch);



  /*char ch[10];

  ch[0] = 'a';
  ch[1] = 'b';
  ch[2] = 'c';
  ch[3] = ' ';
  ch[4] = 'd';
  printf("%s\n", ch);*/



  // ���� : ���ڹ迭�� ����� �ű⿡ ���� `abc`�� �������ּ���.
// ��Ʈ : c���� ��� ������ \0(�ι���)�� ������ �Ѵ�.
  
  /*char ch[4];
  ch[0] = 'a';
  ch[1] = 'b';
  ch[2] = 'c';
  ch[3] = '\0';
  printf("%s\n", ch);




  return 0;
}*/



// ������ ����ϴ� �Լ�(print_str)�� ������ּ���.(%s ��� ����)
// ���� : %s�� ����� �� ����.

#include <stdio.h>
void print_str(char* a) {
  for (int i = 0; a[i] != '\0'; i++) {
    /*if (a[i] == '\0') {
      break;
    }*/
    printf("%c", a[i]);
  }
  printf("\n");
}

int main(void) {
  char str1[10];
  str1[0] = 'a';
  str1[1] = 'b';
  str1[2] = 'c';
  str1[3] = '\0';

  // print_str �Լ��� Ȱ���Ͽ� ���� str1 ��� ����
  print_str(str1);
  // ��� => abc

  char str2[10];
  str2[0] = 'h';
  str2[1] = 'e';
  str2[2] = 'l';
  str2[3] = 'l';
  str2[4] = 'o';
  str2[5] = ' ';
  str2[6] = 'c';
  str2[7] = '\0';

  // print_str �Լ��� Ȱ���Ͽ� ���� str2 ��� ����
  print_str(str2);
  // ��� => hello c

  return 0;
}
// 문제 : 고객에게 숫자를 10개 입력받아서 배열에 넣기
// 조건 : 변수를 2개만 사용해주세요.
// 조건 : 포인터 문법을 쓸 수 없습니다.

/*
== 입력 ==
1번째 숫자를 입력해주세요 : 1[엔터]
2번째 숫자를 입력해주세요 : 2[엔터]
3번째 숫자를 입력해주세요 : 3[엔터]
4번째 숫자를 입력해주세요 : 4[엔터]
5번째 숫자를 입력해주세요 : 5[엔터]
6번째 숫자를 입력해주세요 : 6[엔터]
7번째 숫자를 입력해주세요 : 7[엔터]
8번째 숫자를 입력해주세요 : 8[엔터]
9번째 숫자를 입력해주세요 : 9[엔터]
10번째 숫자를 입력해주세요 : 10[엔터]
== 출력 ==
1번째 입력받은 숫자 : 1
2번째 입력받은 숫자 : 2
3번째 입력받은 숫자 : 3
4번째 입력받은 숫자 : 4
5번째 입력받은 숫자 : 5
6번째 입력받은 숫자 : 6
7번째 입력받은 숫자 : 7
8번째 입력받은 숫자 : 8
9번째 입력받은 숫자 : 9
10번째 입력받은 숫자 : 10
*/

//#include <stdio.h>
//#pragma warning(disable:4996)
//
//int main(void) {
//  int arr[10];
//  int i;
//  for (i = 0; i < 10; i++) {
//    printf("%d번째 숫자 : ", i + 1);
//    //scanf("%d", (arr + i));  포인터 문법
//    scanf("%d", &arr[i]);
//  }
//  for (i = 0; i < 10; i++) {
//    printf("%d번째 입력받은 숫자 : %d\n", (i + 1), arr[i]);
//  }
//  return 0;
//}



// 문제 : 고객에게 숫자를 10개 입력받아서 배열에 넣기
// 조건 : 변수를 2개만 사용해주세요.
// 조건 : 배열 문법을 쓸 수 없습니다.

//#include <stdio.h>
//#pragma warning(disable : 4996)
//
//int main(void) {
//
//  /*int arr[10], i;
//
//  for (i = 0; i < 10; i++) {
//    printf("%d번째 : ", i + 1);
//    scanf("%d", (arr + i));
//  }
//  for (i = 0; i < 10; i++) {
//    printf("%d번째 : %d\n", (i + 1), *(arr + i));
//  }*/
//
//  int arr[5] = { 9, 77, 3, 4, 5 };
//  int* p = arr;
//
//  printf("bae : %d\n", arr[1]);
//  printf("pointer : %d\n", *p + 1);   //그냥 연산
//  printf("pointer : %d\n", *(p + 1));
//  return 0;
//}



// 문제 : 배열을 훼손하는 change 함수를 만들어주세요.(배열의 포인터)

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
//  // x : 배열변수
//  // x의 값은 자동으로 x[0]의 주소값을 가진다.
//  // x == &x[0]
//  // x의 타입은 int* 이다.
//
//  printf("change 함수를 호출하기 전, x[0] : %d, x[1] : %d\n", x[0], x[1]);
//
//  change(x);
//
//  printf("change 함수를 호출하기 후, x[0] : %d, x[1] : %d\n", x[0], x[1]);
//  // 출력 => change 함수를 호출하기 후, x[0] : 200, x[1] : 400




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



  // 문제 : 문자배열을 만들고 거기에 문장 `abc`를 저장해주세요.
// 힌트 : c언어에서 모든 문장은 \0(널문자)로 끝나야 한다.
  
  /*char ch[4];
  ch[0] = 'a';
  ch[1] = 'b';
  ch[2] = 'c';
  ch[3] = '\0';
  printf("%s\n", ch);




  return 0;
}*/



// 문장을 출력하는 함수(print_str)를 만들어주세요.(%s 사용 금지)
// 조건 : %s를 사용할 수 없다.

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

  // print_str 함수를 활용하여 문장 str1 출력 실행
  print_str(str1);
  // 출력 => abc

  char str2[10];
  str2[0] = 'h';
  str2[1] = 'e';
  str2[2] = 'l';
  str2[3] = 'l';
  str2[4] = 'o';
  str2[5] = ' ';
  str2[6] = 'c';
  str2[7] = '\0';

  // print_str 함수를 활용하여 문장 str2 출력 실행
  print_str(str2);
  // 출력 => hello c

  return 0;
}
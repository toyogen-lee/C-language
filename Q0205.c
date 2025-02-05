// 문제 : starts_with 함수를 구현해주세요.
//#include <stdio.h>
//
//typedef int bool;
//
//#define true 1
//#define false 0
//
//bool starts_with(char* str1, char* str2) {
//  int i = 0;
//  while (*(str2 + i) != '\0') {
//    if (*(str1 + i) != *(str2 + i)) {
//      return false;
//    }
//    i++;
//  }
//  return true;
//}
//
//int main(void) {
//
//  bool rs;
//
//  rs = starts_with("abc", "ab");
//  printf("rs : %d\n", rs); // 출력 rs : 1
//
//  rs = starts_with("kbs", "kb");
//  printf("rs : %d\n", rs); // 출력 rs : 1
//
//  rs = starts_with("mbc", "mc");
//  printf("rs : %d\n", rs); // 출력 rs : 0
//
//  return 0;
//}



// 문제 : ends_with 함수를 구현해주세요.
#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

int main(void) {

  bool rs;

  rs = ends_with("abc", "bc");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("kbs", "kb");
  printf("rs : %d\n", rs); // 출력 rs : 0

  rs = ends_with("kbs", "bs");
  printf("rs : %d\n", rs); // 출력 rs : 1

  rs = ends_with("mbc", "mc");
  printf("rs : %d\n", rs); // 출력 rs : 0

  return 0;
}
// ���� : starts_with �Լ��� �������ּ���.
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
//  printf("rs : %d\n", rs); // ��� rs : 1
//
//  rs = starts_with("kbs", "kb");
//  printf("rs : %d\n", rs); // ��� rs : 1
//
//  rs = starts_with("mbc", "mc");
//  printf("rs : %d\n", rs); // ��� rs : 0
//
//  return 0;
//}



// ���� : ends_with �Լ��� �������ּ���.
#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

int main(void) {

  bool rs;

  rs = ends_with("abc", "bc");
  printf("rs : %d\n", rs); // ��� rs : 1

  rs = ends_with("kbs", "kb");
  printf("rs : %d\n", rs); // ��� rs : 0

  rs = ends_with("kbs", "bs");
  printf("rs : %d\n", rs); // ��� rs : 1

  rs = ends_with("mbc", "mc");
  printf("rs : %d\n", rs); // ��� rs : 0

  return 0;
}
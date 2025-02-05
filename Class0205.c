// 문제 : 문장에서 특정 부분만 잘라서 출력하는 함수를 만들어주세요.(print_sub_str)

#include <stdio.h>

//void print_sub_str(char* str, int start, int len) {
//  
//  for (int i = 0; i < len; i++) {
//    printf("%c", str[start + i]);
//
//    if (str[start + i] == '\0') {
//      break;
//    }
//  }
//  printf("\n");  //v1
//}

//void print_sub_str(char* str, int start, int len) {
//
//  int str_len = strlen(str);
//  int end = start + len;
//
//  if (end > str_len) {
//    end = str_len;
//  }
//
//  for (int i = start; i < end; i++) {
//    printf("%c", str[i]);
//  }
//  printf("\n");  //v2
//}

//void print_sub_str(char* str, int start, int len) {
//
//  char sub_str[20];
//
//  strncpy(sub_str, str + start, len);
//  printf("%s\n", sub_str);
//  printf("\n");
//}
//
//
//int main(void) {
//  print_sub_str("abcd", 2, 2);
//  // 출력 => cd
//
//  print_sub_str("abcd", 1, 3);
//  // 출력 => bcd
//
//  print_sub_str("abcd", 1, 10);
//  // 출력 => bcd
//
//  print_sub_str("abcd", 0, 2);
//  // 출력 => ab
//
//  return 0;
//}



// 문제 : 문장에서 특정 문자의 위치를 반환하는 함수를 만들어주세요.(get_index_of_c)

//#include <stdio.h>
//#include <string.h>
//
////int get_index_of_c(char* str, char n) {
////  for (int i = 0; str[i] != '\0'; i++) {
////    if (str[i] == n) {
////      return i;
////    }
////  }
////  return -1;  //v1
////}
//
//int get_index_of_c(char* str, char c) {
//  int index;
//
//  char* target_address = strchr(str, c);
//  index = target_address - str;
//
//  if (target_address == NULL) {
//    return -1;
//  }
//
//  return index;
//}
//
//int main(void) {
//  int index;
//
//  index = get_index_of_c("abc", 'b');
//  printf("index : %d\n", index);
//  // 출력 => index : 1
//
//  index = get_index_of_c("test", 's');
//  printf("index : %d\n", index);
//  // 출력 => index : 2
//
//  index = get_index_of_c("test", 'x');
//  printf("index : %d\n", index);
//  // 출력 => index : -1
//
//  return 0;
//}
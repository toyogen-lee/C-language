//#include <stdio.h>
//
//int main() {
//
//	//char* str1 = "abc";  //문자열 상수
//	////str1 8byte
//	////abc 4byte -> total 12byte
//	//printf("%c\n", *(str1 + 1));
//
//	////char str2[4] = "abc";  //문자열 변수
//	////str2[1] = "!";
//	////printf("%s\n", str2);
//
//
//
//	//char* str2 = "abc";
//	//char* str3 = "def";
//
//	//printf("%p\n", str1);
//	//printf("%p\n", str2);
//	//printf("%p\n", str3);
//
//
//
//	//char* str1 = "abc";
//	//char* str2 = "abcd";  //4byte up
//
//	//char* str3 = "def";
//	//char* str4 = "defg";  //4byte up
//
//	//printf("%d\n", str1);
//	//printf("%d\n", str2);
//	//printf("%d\n", str3);
//	//printf("%d\n", str4);
//
//
//
//	// 문제 - "abc" 라는 코드가 실행되면 발생되는 일을 자세히 설명해주세요.
//	char* str1 = "abc";
//	char str2[10] = "abc";
//
//	printf("%c\n", *(str1 + 1));
//	printf("%d\n", str1);
//	printf("%d\n", str2);  //아무 숫자 나옴.
//
//	str2[4] = "e";
//	str2[5] = "t";
//	printf("%s\n", str2);
//
//
//
//	return 0;
//}




// 문제 : name1과 name2과 name3의 선언부분에서 총 몇바이트의 메모리를 사용하는지 설명해주세요.

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char* name1 = "abc";
//	// name1 => ?바이트  8
//	// "abc" => ?바이트  4 
//	// 총 ?바이트 사용  12
//	printf("name1 : %s\n", name1);
//
//	char name2[10] = "bbc";
//	// name2 => ?바이트  8
//	// name2가 가리키는 배열의 크기 => ?바이트  10
//	// "bbc" => ?바이트  4
//	// 총 ?바이트  **10**
//
//	printf("name2 : %s\n", name2);
//
//	char name3[10] = "bbc";
//	// name3 => ?바이트  8
//	// name3가 가리키는 배열의 크기 => ?바이트  10
//	// "bbc" => ?바이트  4
//	// 총 ?바이트  10
//
//	printf("name3 : %s\n", name3);
//
//	return 0;
//}



// 문제 : name1[0]을 수정하면 안되는 이유를 설명해주세요.

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char* name1 = "abc";
//	printf("name1 : %s\n", name1);
//	// name1[0] = 's'; // 이 코드가 안되는 이유를 설명해주세요.  문자열 상수니까.
//
//	char name2[10] = "bbc";
//
//	printf("name2 : %s\n", name2);
//	name2[0] = 'k';
//	printf("name2 : %s\n", name2);
//
//	return 0;
//}



// 문제 : 아래와 같이 출력되도록, change 함수를 구현해주세요.

//#include <stdio.h>
//
//void change(char**** pppp) {
//  ****pppp = 'a';
//  *(***pppp + 1) = 'b';
//  *(***pppp + 2) = 'c';
//  *(***pppp + 3) = 'd';
//  *(***pppp + 4) = '\0';
//}
//
//int main(void) {
//  char str[10];
//
//  char* p = str;
//  char** pp = &p;
//  char*** ppp = &pp;
//  change(&ppp);
//
//  printf("%s\n", str);
//  // 출력 => abcd
//
//  return 0;
//}



#include <stdio.h>

// 문제 : 문장의 길이를 반환하는 함수를 만들어주세요.(get_str_len)

int get_str_len(char* am) {

  /*for (int i = 0; 1; i++) {
    if (*(am + i) == '\0') {
      return i;
    }
  }*/  //v1

  //int count = 0, i = 0;
  //while (*(am + i) != '\0') {
  //  count++;
  //  i++;
  //}
  //return count;  //v2

  return strlen(am);  //v3

}

int main(void) {
  char name[100] = "Paul"; // 이렇게 하면 name이 가리키는 배열에 Paul이 저장되면서 시작된다.
  int len = get_str_len(name);

  printf("len : %d\n", len);
  // 출력 => len : 4

  name[0] = 't';
  name[1] = 'o';
  name[2] = 'm';
  name[3] = 'a';
  name[4] = 's';
  name[5] = '\0';

  len = get_str_len(name);

  printf("len : %d\n", len);
  // 출력 => len : 5

  return 0;
}
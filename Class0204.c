//#include <stdio.h>
//
//int main() {
//
//	//char* str1 = "abc";  //���ڿ� ���
//	////str1 8byte
//	////abc 4byte -> total 12byte
//	//printf("%c\n", *(str1 + 1));
//
//	////char str2[4] = "abc";  //���ڿ� ����
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
//	// ���� - "abc" ��� �ڵ尡 ����Ǹ� �߻��Ǵ� ���� �ڼ��� �������ּ���.
//	char* str1 = "abc";
//	char str2[10] = "abc";
//
//	printf("%c\n", *(str1 + 1));
//	printf("%d\n", str1);
//	printf("%d\n", str2);  //�ƹ� ���� ����.
//
//	str2[4] = "e";
//	str2[5] = "t";
//	printf("%s\n", str2);
//
//
//
//	return 0;
//}




// ���� : name1�� name2�� name3�� ����κп��� �� �����Ʈ�� �޸𸮸� ����ϴ��� �������ּ���.

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char* name1 = "abc";
//	// name1 => ?����Ʈ  8
//	// "abc" => ?����Ʈ  4 
//	// �� ?����Ʈ ���  12
//	printf("name1 : %s\n", name1);
//
//	char name2[10] = "bbc";
//	// name2 => ?����Ʈ  8
//	// name2�� ����Ű�� �迭�� ũ�� => ?����Ʈ  10
//	// "bbc" => ?����Ʈ  4
//	// �� ?����Ʈ  **10**
//
//	printf("name2 : %s\n", name2);
//
//	char name3[10] = "bbc";
//	// name3 => ?����Ʈ  8
//	// name3�� ����Ű�� �迭�� ũ�� => ?����Ʈ  10
//	// "bbc" => ?����Ʈ  4
//	// �� ?����Ʈ  10
//
//	printf("name3 : %s\n", name3);
//
//	return 0;
//}



// ���� : name1[0]�� �����ϸ� �ȵǴ� ������ �������ּ���.

//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//	char* name1 = "abc";
//	printf("name1 : %s\n", name1);
//	// name1[0] = 's'; // �� �ڵ尡 �ȵǴ� ������ �������ּ���.  ���ڿ� ����ϱ�.
//
//	char name2[10] = "bbc";
//
//	printf("name2 : %s\n", name2);
//	name2[0] = 'k';
//	printf("name2 : %s\n", name2);
//
//	return 0;
//}



// ���� : �Ʒ��� ���� ��µǵ���, change �Լ��� �������ּ���.

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
//  // ��� => abcd
//
//  return 0;
//}



#include <stdio.h>

// ���� : ������ ���̸� ��ȯ�ϴ� �Լ��� ������ּ���.(get_str_len)

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
  char name[100] = "Paul"; // �̷��� �ϸ� name�� ����Ű�� �迭�� Paul�� ����Ǹ鼭 ���۵ȴ�.
  int len = get_str_len(name);

  printf("len : %d\n", len);
  // ��� => len : 4

  name[0] = 't';
  name[1] = 'o';
  name[2] = 'm';
  name[3] = 'a';
  name[4] = 's';
  name[5] = '\0';

  len = get_str_len(name);

  printf("len : %d\n", len);
  // ��� => len : 5

  return 0;
}
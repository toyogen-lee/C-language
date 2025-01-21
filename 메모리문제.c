// 문제 : 변수를 만들고 3.14를 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

#include "stdio.h"


int main(void) {
  int i = 3.14;

  printf("1st 시도 => i : %d\n", i); // 실패 => i(int 변수) 에는 오직 정수만 들어간다.

  float f = 3.14;

  printf("2nd 시도 => f : %d\n", f); // 실패 => `%d`는 데이터를 `int 로 해석하겠다.`라는 뜻 입니다.

  // 여기서 구현
  printf("%.2f", f);   //float : 4 byte  |  %.2f : 소수점 둘째까지 출력

  return 0;
}



// 문제 : 변수를 만들고 200을 넣은 후 출력해보세요.(가장 메모리를 효율적으로 사용해주세요.)

#include "stdio.h"

int main(void) {
  unsigned char i = 200;   //short : -32500 ~ 32500

  printf("i : %d\n", i);
  return 0;
}

// + int : -21억~21억  |  long : 1800조
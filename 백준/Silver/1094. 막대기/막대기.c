#include <stdio.h>

int main()
{
  // 막대기 길이 입력
  int x;
  scanf("%d", &x);

  // 1의 개수 세기
  int count = 0;

  // x가 0이 될 때까지 반복
  while (x)
  {
    count += x & 1; // x의 최하위 비트가 1이면 count 증가
    x >>= 1;        // x를 오른쪽으로 1비트 이동
  }

  printf("%d\n", count); // 1의 개수 출력
  return 0;              // 프로그램 종료
}
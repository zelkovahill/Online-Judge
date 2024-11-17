#include <stdio.h>

int main()
{

  int n;           // 배달해야 할 설탕 무게
  scanf("%d", &n); // 배달해야 할 설탕 무게 입력

  int count = 0; // 사용한 봉지 수

  // 5kg 봉지로 최대한 많이 담기
  while (n >= 0)
  {
    // 5kg 봉지로 딱 나누어 떨어지면
    if (n % 5 == 0)
    {
      count += n / 5;        // 5kg 봉지로 나눈 몫을 count에 더함
      printf("%d\n", count); // 사용한 봉지 수 출력
      return 0;              // 프로그램 종료
    }
    n -= 3;  // 3kg 봉지 사용
    count++; // 사용한 봉지 수 증가
  }

  // 정확히 n(kg)을 만들 수 없는 경우
  printf("-1\n"); // -1 출력
  return 0;       // 프로그램 종료
}
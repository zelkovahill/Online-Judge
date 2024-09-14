#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b)
{
  long long answer = 0;

  if (a > b)
  {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
  }

  for (; a <= b; a++)
  {
    answer += a;
  }

  return answer;
}
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

  answer = (long long)(a + b) * (b - a + 1) / 2;

  return answer;
}
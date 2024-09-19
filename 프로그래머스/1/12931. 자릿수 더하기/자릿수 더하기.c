#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int answer = 0;

    for (; n > 0;)
    {
        answer += n % 10;
        n /= 10;
    }
    return answer;
}
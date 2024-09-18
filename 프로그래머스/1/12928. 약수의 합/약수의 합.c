#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 정수 n을 입력받아 n의 약수를 모두 더한 값을 반환

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            answer += i;
        }
        else if (n % i == 0)
        {
            answer += i + (n / i);
        }
    }

    return answer;
}
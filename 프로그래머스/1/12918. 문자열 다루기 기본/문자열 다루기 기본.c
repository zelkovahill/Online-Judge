#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int lengthString(const char *s)
{
    int count = 0;
    for (; *s; s++)
    {
        count++;
    }
    return count;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char *s)
{

    int length = lengthString(s);

    if (length != 4 && length != 6)
    {
        return false;
    }

    for (int i = 0; i < length; i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            return false;
        }
    }

    return true;
}
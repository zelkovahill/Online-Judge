#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int sign = 1;
    
    if(*s == '-')
    {
        sign = -1;
        s++;
    }
    else if(*s == '+')
    {
        s++;
    }
    
    for(;*s;s++)
    {
        answer = answer * 10 +(*s-'0');
    }
    
    return answer * sign;
}
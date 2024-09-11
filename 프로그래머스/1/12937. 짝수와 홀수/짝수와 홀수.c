#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    // 알파벳 문자 하나당 1바이트
    // "Even" 4바이트 기준
    char* answer = (char*)malloc(4*sizeof(char));
    
    answer = num % 2 == 0 ? "Even" : "Odd";
    
    return answer;
}
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

// sequence_len은 배열 sequence의 길이입니다.
int* solution(int sequence[], size_t sequence_len, int k) {
    // 동적 할당: 반환 배열은 [시작 인덱스, 끝 인덱스]를 저장
    int* answer = (int*)malloc(2 * sizeof(int));
    if (answer == NULL) {
        printf("메모리 할당 실패\n");
        return NULL;
    }

    int start = 0, end = 0, sum = 0;
    int min_length = INT_MAX; // 최소 구간 길이를 무한대로 초기화

    // 초기 결과값 [-1, -1]
    answer[0] = -1;
    answer[1] = -1;

    while (end < sequence_len) {
        // end를 확장하며 sum 갱신
        sum += sequence[end];

        // sum이 k 이상인 경우
        while (sum >= k) {
            // 합이 k이고 구간 길이가 최소라면 결과 갱신
            if (sum == k && (end - start + 1) < min_length) {
                answer[0] = start;
                answer[1] = end;
                min_length = end - start + 1;
            }
            // start를 증가하며 구간 축소
            sum -= sequence[start];
            start++;
        }

        end++;
    }

    return answer;
}
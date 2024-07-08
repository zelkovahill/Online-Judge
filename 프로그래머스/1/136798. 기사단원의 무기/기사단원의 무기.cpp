#include <string>
#include <vector>

using namespace std;


// 1차 시간 초과
int countDivisors(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (i * i == n)
                cnt += 1; 
            else
                cnt += 2; 
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; ++i) {
        int attackPower = countDivisors(i);
        if (attackPower > limit) {
            attackPower = power;
        }
        answer += attackPower;
    }
    
    return answer;
}
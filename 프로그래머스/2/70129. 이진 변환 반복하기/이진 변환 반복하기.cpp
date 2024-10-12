#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s)
{
    int transformCount = 0;
    int removedCount = 0;

    // 무한 루프
    for (;;)
    {
        // s가 "1"이면 반복문 종료
        if (s == "1")
            break;

        transformCount++;

        // 1의 개수 세기 & '0' 제거
        int oneCount = 0;
        for (char c : s)
        {
            if (c == '1')
            {
                oneCount++;
            }
        }

        // 제거된 '0'의 개수
        removedCount += s.length() - oneCount;

        // '1'의 개수를 2진수 변환
        string new_s = "";
        int num = oneCount;

        for (;;)
        {
            new_s = char((num % 2) + '0') + new_s;
            num /= 2;

            if (num == 0)
                break;
        }

        // 변환된 값 다시 s에 할당
        s = new_s;
    }
    return {transformCount, removedCount};
}
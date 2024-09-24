#include <string>
#include <vector>

using namespace std;

int solution(int left, int right)
{
    int result = 0;

    // 개수가 짝수 +
    // 개수가 홀수 -
    for (; left <= right; left++)
    {
        int count = 0;

        for (int i = 1; i * i <= left; i++)
        {

            if (i * i == left)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }

        if (count % 2 == 0)
        {
            result += left;
        }
        else
        {
            result -= left;
        }
    }

    return result;
}
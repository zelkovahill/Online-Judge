#include <string>
#include <vector>
#include <climits>

using namespace std;

int solution(int num)
{
    int count = 0;
    

    for (; num;)
    {

        if (num == 1)
        {
            break;
        }

        if (count == 500)
        {
            return -1;
        }

        if (num % 2 == 0)
        {
            num >>= 1;
        }
        else
        {
            if(num > (INT_MAX -1) / 3)
            {
                return -1;
            }
            num = num * 3 + 1;
        }

        count++;
    }

    return count;
}
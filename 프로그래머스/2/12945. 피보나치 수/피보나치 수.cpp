#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    int pp = 0;
    int p = 1;
    int result = 0;

    for (int i = 2; i <= n; i++)
    {
        result = (pp + p) % 1234567;
        pp = p;
        p = result;
    }

    return result;
}
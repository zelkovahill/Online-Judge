#include <string>
#include <vector>

using namespace std;

int digit(int n)
{
    int sum = 0;

    for (; n > 0;)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

bool solution(int x)
{

    return x % digit(x) == 0;
    
}


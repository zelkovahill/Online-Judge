#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int c = n + 1;

    for (;;)
    {
        
        int count_n = 0;
        for (int temp_n = n; temp_n > 0; temp_n >>= 1)
        {
            count_n += (temp_n & 1);
        }

        
        int count_c = 0;
        for (int temp_c = c; temp_c > 0; temp_c >>= 1)
        {
            count_c += (temp_c & 1);
        }

        
        if (count_c == count_n)
        {
            return c;
        }

        
        c++;
    }
}
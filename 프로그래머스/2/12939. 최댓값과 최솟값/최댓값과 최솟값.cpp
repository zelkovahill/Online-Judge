#include <string>
#include <vector>

using namespace std;

void selection_sort(int list[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int least = i;

        for (int j = i + 1; j < n; j++)
        {
            if (list[j] < list[least])
            {
                least = j;
            }
        }

        if (least != i)
        {
            list[i] = list[i] ^ list[least];
            list[least] = list[i] ^ list[least];
            list[i] = list[i] ^ list[least];
        }
    }
}

string solution(string s)
{
    int number[100];
    int numCount = 0;
    int num = 0;
    bool whatSign = false;

    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] == ' ' || i == s.length())
        {
            if (whatSign)
            {
                num = -num;
            }

            number[numCount++] = num;
            num = 0;
            whatSign = false;
        }
        else if (s[i] == '-')
        {
            whatSign = true;
        }
        else
        {
            num = num * 10 + (s[i] - '0');
        }
    }

    selection_sort(number, numCount);

    string result = to_string(number[0]) + " " + to_string(number[numCount - 1]);

    return result;
}
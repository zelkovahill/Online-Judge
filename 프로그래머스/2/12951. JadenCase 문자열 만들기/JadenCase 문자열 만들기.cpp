#include <string>

using namespace std;

string solution(string s)
{
    bool isFirstChar = true;

    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            isFirstChar = true;
        }
        else
        {
            if (isFirstChar)
            {
                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    s[i] -= 'a' - 'A';
                }
                isFirstChar = false;
            }
            else
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] += 'a' - 'A';
                }
            }
        }
    }

    return s;
}
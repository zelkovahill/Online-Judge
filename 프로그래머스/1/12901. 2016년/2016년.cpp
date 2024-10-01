#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    int days = 0;

    for (int i = 1; i < a; i++)
    {
        days += month[i];
    }

    days += b - 1;

    return week[days % 7];
}
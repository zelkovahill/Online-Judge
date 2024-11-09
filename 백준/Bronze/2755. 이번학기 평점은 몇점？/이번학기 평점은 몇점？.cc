#include <iostream>
#include <iomanip>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

float getUnit(string unit)
{
    if (unit == "A+")
        return 4.3;
    else if (unit == "A0")
        return 4.0;
    else if (unit == "A-")
        return 3.7;
    else if (unit == "B+")
        return 3.3;
    else if (unit == "B0")
        return 3.0;
    else if (unit == "B-")
        return 2.7;
    else if (unit == "C+")
        return 2.3;
    else if (unit == "C0")
        return 2.0;
    else if (unit == "C-")
        return 1.7;
    else if (unit == "D+")
        return 1.3;
    else if (unit == "D0")
        return 1.0;
    else if (unit == "D-")
        return 0.7;
    else if (unit == "F")
        return 0.0;
}

int main()
{
    FAST;

    int subjectNumber;
    cin >> subjectNumber;
    float totalScore = 0;
    float totalUnit = 0;

    for (int i = 0; i < subjectNumber; i++)
    {
        string sunbjectName;
        int subjectScore;
        string unit;

        cin >> sunbjectName >> subjectScore >> unit;
        totalUnit += subjectScore;
        totalScore += subjectScore * getUnit(unit);
    }

    float gpa = totalScore / totalUnit;

    cout << fixed << setprecision(2) << gpa << "\n";
}
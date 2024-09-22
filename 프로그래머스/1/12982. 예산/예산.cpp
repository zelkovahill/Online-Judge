#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

// 부서별로 신청한 금액이 들어있는 배열 d
// 예산 budget

// 선택 정렬
void selectionSort(vector<int> &list)
{
    int indexMin;

    for (int i = 0; i < list.size() - 1; i++)
    {
        indexMin = i;

        for (int j = i + 1; j < list.size(); j++)
        {
            if (list[j] < list[indexMin])
            {
                indexMin = j;
            }
        }
        if (i != indexMin)
        {
            list[i] = list[i] ^ list[indexMin];
            list[indexMin] = list[i] ^ list[indexMin];
            list[i] = list[i] ^ list[indexMin];
        }
    }
}

int solution(vector<int> d, int budget)
{
    selectionSort(d);

    int sum = 0;
    int answer = 0;

    for (int i = 0; i < d.size(); i++)
    {
        if (sum + d[i] <= budget)
        {
            sum += d[i];
            answer++;
        }
        else
        {
            break;
        }
    }
    return answer;
}

// vector<int> solution(vector<int> d, int budget)
// {
//     selectionSort(d);

//     return d;
// }

int main()
{
    vector<int> d;
    d.push_back(1);
    d.push_back(3);
    d.push_back(2);
    d.push_back(5);
    d.push_back(4);
    int budget = 9;

    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }

    cout << "\n";

    selectionSort(d);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
}
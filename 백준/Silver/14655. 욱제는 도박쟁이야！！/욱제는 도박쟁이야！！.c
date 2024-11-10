#include <stdio.h>

int CalculateSum(int *round, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (round[i] < 0)
        {
            sum += round[i] * -1;
        }
        else
        {
            sum += round[i];
        }
    }
    return sum;
}

int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);

    int round1[n];
    int round2[n];

    // 1 라운드 입력
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &round1[i]);
    }

    // 2 라운드 입력
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &round2[i]);
    }

    printf("%d\n", CalculateSum(round1, n) + CalculateSum(round2, n));
    return 0;
}
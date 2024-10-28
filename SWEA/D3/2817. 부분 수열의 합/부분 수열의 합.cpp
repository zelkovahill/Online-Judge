#include <iostream>
#include <vector>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int countWays(const vector<int> &a, int idx, int sum, int k)
{
    if (sum == k)
    {
        return 1;
    }

    if (idx >= a.size() || sum > k)
    {
        return 0;
    }

    int count = 0;

    count += countWays(a, idx + 1, sum + a[idx], k);
    count += countWays(a, idx + 1, sum, k);

    return count;
}

int main()
{
    FAST;

    int T; // 테스트 케이스 수
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int n; // n개의 자연수
        int k;

        cin >> n >> k;

        vector<int> a(n); // 수열 a

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int result = countWays(a, 0, 0, k);

        cout << "#" << i << " " << result << endl;
    }

    return 0;
}
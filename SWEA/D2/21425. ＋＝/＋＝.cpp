#include <iostream>
#include <vector>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

int main()
{
    FAST;

    int T;
    cin >> T;

    vector<int> results(T);

    for (int i = 0; i < T; i++)
    {
        long long x;
        long long y;
        long long n;

        cin >> x >> y >> n;

        int count = 0;

        for (; x <= n && y <= n; count++)
        {
            if (x < y)
            {
                x += y;
            }
            else
            {
                y += x;
            }
        }

        results[i] = count;
    }

    for (const int &result : results)
    {
        cout << result << '\n';
    }

    return 0;
}
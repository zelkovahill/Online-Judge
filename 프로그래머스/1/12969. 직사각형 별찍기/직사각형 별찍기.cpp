#include <iostream>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int m;

    cin >> n >> m;

    // 세로
    for (int i = 0; i < m; i++)
    {
        // 가로
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
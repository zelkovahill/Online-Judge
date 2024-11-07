#include <iostream>
#include <iomanip>
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main()
{
    FAST;

    int n;
    double ERA = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        ERA = 1 - (1 - ERA) * (1 - a / 100.0);

        cout.setf(ios::fixed);
        cout << setprecision(6);
        cout << fixed << setprecision(6) << ERA * 100 << "\n";
    }
    return 0;
}
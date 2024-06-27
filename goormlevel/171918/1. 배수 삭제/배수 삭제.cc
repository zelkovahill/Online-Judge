#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long n, k;
    cin >> n >> k;

    long sum = 0;

    for (int i = 0; i < n; ++i) 
		{
        long v;
        cin >> v;
			
        if (k == 0 || v % k != 0) 
				{ 
            sum += v;
        }
    }

    cout << sum << endl;
    return 0;
}

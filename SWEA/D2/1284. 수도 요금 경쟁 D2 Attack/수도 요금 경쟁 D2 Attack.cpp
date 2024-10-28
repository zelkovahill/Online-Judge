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

    int T; // 테스트 케이스 수
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        int p; // A사 1리터당 요금
        int q; // B사 기본요금
        int r; // B사 기본요금 적용량
        int s; // B사 초과요금
        int w; // 사용량

        cin >> p >> q >> r >> s >> w;

        int ACharge = p * w;
        int BCharge;

        if (w < r)
        {
            BCharge = q;
        }
        else
        {
            BCharge = q + (w - r) * s;
        }

        int result = ACharge > BCharge ? BCharge : ACharge;

        cout << "#" << i << " " << result << "\n";
    }

    return 0;
}
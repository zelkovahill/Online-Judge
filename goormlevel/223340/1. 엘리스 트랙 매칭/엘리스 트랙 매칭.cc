#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int cntC = 0;
    int cntS = 0;
    int cntA = 0;
		int cntI = 0;

    for (int i = 0; i < n; i++)
    {
        char s;
        cin >> s;

        switch (s)
        {
            case 'C':
                cntC++;
                break;
            
            case 'S':
                cntS++;
                break;
					case 'I':
								cntI++;
								break;
                
            case 'A':
                cntA++;
                break;
					default:
						 break;
        }
    }

    char result;
    cin >> result;

    switch (result)
    {
        case 'C':
            cout << cntC;
            break;
        
        case 'S':
            cout << cntS;
            break;
			case 'I':
								 cout << cntI;
								break;
            
        case 'A':
            cout << cntA;
            break;
				default:
						 break;
    }

    return 0;
}
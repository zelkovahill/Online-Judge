#include <iostream>

using namespace std;

int main()
{
    string str;
    int tigerCnt = 0;
    int lionCnt = 0;
    
    for (int i = 0; i<9; i++)
    {
        cin >> str;
        
        if(str == "Tiger")
        {
            tigerCnt++;
        }
        else
        {
            lionCnt++;
        }
    }
    
    if(tigerCnt > lionCnt)
    {
        cout << "Tiger";
    }
    else
    {
        cout << "Lion";
    }
    
    return 0;
}
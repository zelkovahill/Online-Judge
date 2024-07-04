#include <iostream>
#include <string>
#include <cassert> 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
    int n;
    cin >> n;
	 cin.ignore();
    
    for(int i = 0; i < n; i++)
    {
        string str;
        getline(cin,str);
				bool hasVowel = false;
				string result="";
        for(int j = 0; j < str.size(); j++)
        {
            switch(str[j])
            {
               case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A': 
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                    result+=str[j];
										hasVowel = true;
                    break;
                default:
                    break;
						}
        }
			if(!hasVowel)
			{
				cout<<"???\n";
			}
			else
			{
				cout<<result<<"\n";
			}
			
    }

    return 0;
}
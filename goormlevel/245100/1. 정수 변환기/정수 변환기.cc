#include <iostream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int k;
	string s;
	
	cin>>n>>k;
	cin>>s;
	
	for(int i =0;i<n;i++)
	{
		int digit = s[i]-'0';
		int new_digit = digit +k;
		cout<<new_digit;
	}
	
	
}
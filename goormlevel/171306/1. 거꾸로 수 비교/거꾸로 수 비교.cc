#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int reverseNumber(int n);

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int a;
	int b;
	
	cin>>a>>b;
	
	int reverseA=reverseNumber(a);
	int reverseB=reverseNumber(b);
	
	int result = reverseA > reverseB ? a: b;
	cout<<result;
	
	
}

int reverseNumber(int n)
{
	string str=to_string(n);
	reverse(str.begin(),str.end());
	
	return stoi(str);
}
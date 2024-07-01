#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int x;
		int y;
		int n;
		cin>>x>>y>>n;
		int sum = abs(x) + abs(y);
		if(sum<=n && (sum % 2 == n % 2))
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
}
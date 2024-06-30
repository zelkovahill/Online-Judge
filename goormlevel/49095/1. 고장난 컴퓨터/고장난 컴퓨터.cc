#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int c;
	
	cin>>n>>c;
	
	
	vector<int> t(n);

	
	int cnt=0;
	
	
	for(int i=0;i<n;i++)
	{
		cin>>t[i];
	}
	
	for(int i=0;i<n-1;i++)
	{
		int differnce = t[i]-t[i+1];
		int absDiffernce = abs(differnce);
		
		
		if(absDiffernce<c+1)
		{
			cnt++;
		}
		else
		{
			cnt=0;
		}
		
	}
	
	cout<<cnt+1;
	
	
}
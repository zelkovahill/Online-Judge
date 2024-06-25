#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	int result[t];
	
	for(int i=0; i<t;i++)
	{
		int u;
		int h;
		
		cin>>u>>h;
		result[i]=u*h;
	}
	
	int max;
	max=result[0];
	
	for(int j=0; j<t;j++)
	{
		if(max<result[j])
		{
			max=result[j];
		}
	}
	
	cout<<max;
	
}
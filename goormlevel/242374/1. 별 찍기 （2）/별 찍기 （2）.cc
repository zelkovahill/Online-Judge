#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin>>N;
	
	for(int i=N;i>=1;i--)
	{
		for(int j=i;j>0;j--)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin>>N;
	
	for(int index =1; index<=N; index++)
	{
		for(int j=1;j<=index;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
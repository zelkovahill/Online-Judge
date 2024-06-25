#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	char i;
	char j;
	
	cin>>n;
	cin>>i>>j;
	
	for(int a=0;a<n;a++)
	{
		for(int b=0;b<n;b++)
		{
			if(a%2==0 && b%2==0)
			{
				cout<<i<<" ";
			}
			else
			{
				cout<<j<<" ";
			}
		}
		cout<<"\n";
	}
	
}
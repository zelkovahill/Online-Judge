#include <iostream>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	for(int i = 0; i<n;i++)
	{
		int a;
		int b;
		
		cin>>a>>b;
		
		if(a<b)
		{
			cout<<"Sunflower\n";
		}
		else if(a==b)
		{
			cout<<"Tulip\n";
		}
		else if(a>b)
		{
			cout<<"Rose\n";
		}
	}
}
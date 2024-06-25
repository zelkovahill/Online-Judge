#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int a;
	int b;
	int c;
	int n;
	
	cin>>a>>b>>c>>n;
	
	int aLim=n/a;
	int bLim=n/b;
	int cLim=n/c;
	
	for(int i=0;i<=cLim;i++)
	{
		int cur=c*i;
		for(int j=0;j<=bLim;j++)
		{
			int cur2 = cur+ j*b;
			for(int k=0;k<=aLim;k++)
			{
				int cur3=cur2+k*a;
				if(cur3==n)
				{
					cout<<"1";
					return 0;
				}
			}
		}
	}
	cout<<"0";
	return 0;
	
	
	
}
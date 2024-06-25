#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	
	cin>>n;
	
	int sum;
	int a,b;
	
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		sum=a+b;
		cout<<sum<<"\n";
	}
}
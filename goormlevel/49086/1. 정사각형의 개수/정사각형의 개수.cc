#include <iostream>

using namespace std;

int main()
{
	long long int n;
	cin>>n;
	
	long long int sum =0;
	
	for(long long int i=n;i>0;i--)
	{
		sum+=i*i;
	}
	
	cout<<sum;
	
}
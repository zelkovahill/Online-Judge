#include <iostream>
using namespace std;
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int sum=0;
	
	for(int index = 0; index<5;index++)
	{
		cin>>n;	
		sum+=n;
	}
	cout<<sum;
	
	
}
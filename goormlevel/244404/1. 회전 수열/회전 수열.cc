#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int m;
	cin>>n>>m;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
	}
	
	int firstIndex=0;
	
	for(int i=0;i<m;i++)
	{
		firstIndex=(firstIndex+vec[firstIndex])%n;
	}
	
	cout<<vec[firstIndex];
}
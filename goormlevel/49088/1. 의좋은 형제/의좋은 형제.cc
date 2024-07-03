#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int m;
	int d;
	
	cin>>n>>m;
	cin>>d;
	
	for(int i=1;i<=d;i++)
	{
		if(i%2!=0)	// 홀수일 일때
		{
			m = n % 2 != 0 ? m+(n/2)+1 : m+(n/2);
			n = n/2;
		}
		else				// 짝수일 일때
		{
			n = m % 2 != 0 ? n+(m/2)+1 : n+(m/2);
			m = m/2;
		}
	}
	
	cout<<n<<" "<<m;
}
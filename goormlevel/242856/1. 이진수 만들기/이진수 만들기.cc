#include <iostream>
using namespace std;

void binary(int n)
	{
		if(n==0)
		{
			cout<<"0";
			return;
		}
		
		bool leadingZero = true;
		
		for(int index = sizeof(int) * 8 -1;index>=0;index--)
		{
			if((n & (1 << index)) != 0)
			{
				leadingZero=false;
				cout<<"1";
			}
			else if(!leadingZero)
				cout<<"0";
				
		}
		
	}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N;
	cin>>N;
	binary(N);
}
#include <iostream>
using namespace std;
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int N; 	// 물품의 종료
	int M;	// 축제 예산
	
	cin>>N>>M;
	
	int sum=0;
	
	for(int index = 0; index<N;index++)
	{
		int c;
		int v;
		
		cin>>c>>v;
		
		sum+=c*v;
	}
	
	
	
	if(M<sum)
	{
		cout<<"No";
	}
	else
	{
		int result = M - sum;
		cout<<result;
	}
	
	
	
	
	
	
}
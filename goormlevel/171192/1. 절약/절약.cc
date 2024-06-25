#include <iostream>
#include <string>
using namespace std;
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	long n;
	long result=0;
	
	cin>>n;
	
	for(int index =0; index<n; index++)
	{
		string c;
		long v;
		
		cin>>c>>v;
		
		if(c=="in")
		{
			result +=v;
		}
		else if(c=="out")
		{
			result -=v;
		}
		
		if(result <0)
		{
			break;
		}
	}
	
	if(result<0)
	{
		cout<<"fail";
	}
	else if(result>=0)
	{
		cout<<"success";
	}
	
	
}
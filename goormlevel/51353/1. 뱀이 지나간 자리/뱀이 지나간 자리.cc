#include <iostream>

using namespace std;


int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	int m;
	cin >> n >> m;
 
	bool line = true;
	bool left = false;
	
  for(int i = 0 ; i < n; i++)
	{
		 if(line)
		 {
			 for(int j =0; j < m; j++)
			 {
				 cout << "#";
			 }
			 cout<<'\n';
			 line = false;
		 }
		 else
		 {
			 if(left) 
			 {
				 cout<<"#";
			 }
				 
			 for(int j = 0 ;j <m -1; j++)
			 {
				 cout << ".";
			 }
				 
			 if(!left) 
			 {
				 cout << "#";
			 }
			 
			 cout <<'\n';
			 left = !left;
			 line = true;
		 }
	}
	
	return 0;
}
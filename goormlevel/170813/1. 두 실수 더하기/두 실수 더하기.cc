#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(0);
	
	float a;
	float b;
	
	cin>>a>>b;
	
	float sum=a+b;

	
	
	cout << fixed << setprecision(6) << sum << endl;
	
	

}


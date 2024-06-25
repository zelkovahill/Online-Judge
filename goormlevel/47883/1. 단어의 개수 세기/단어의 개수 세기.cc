#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	string str;
	getline(cin,str);

	stringstream ss(str);
	string word;
	int count=0;

	while(ss>>word)
	{
		count++;
	}

	cout<<count<<"\n";

}
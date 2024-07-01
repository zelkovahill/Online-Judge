#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	int sum=0;
	
	
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		vector<int> student(n);
		
		for(int j=0;j<n;j++)
		{
			cin>>student[j];
			sum+=student[j];
		}
		float average = sum/static_cast<float>(n);
		int cnt =0;
		
		for(int k=0;k<n;k++)
		{
			if(average<=student[k])
			{
				cnt++;
			}
		}
		
		cout<<cnt<<"/"<<n<<"\n";
		sum=0;
	}
	
}
	
	
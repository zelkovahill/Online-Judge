#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>> n;
	
	vector<int> p(5);
	for(int i=0;i<p.size();i++)
	{
		cin>>p[i];
	}
	
	vector<vector<int>> graph(5);
	for(int i=0; i<n; i++)
	{
		int a;
		int b;
		cin>>a>>b;
		graph[a-1].push_back(b);
	}
	
	int answer = 240;
	
	for(int i=0;i<p.size();i++)
	{
		vector<int>& time_graph = graph[i];
		sort(time_graph.begin(),time_graph.end());
		
		int limit = p[i];
		for(int j=0;j<limit;j++)
		{
			answer+=time_graph[j];
		}
		
		if(limit!=1)
		{
			answer +=(time_graph[limit-1] - time_graph[0]);
		}
	}
	
	cout<<answer<<endl;
}
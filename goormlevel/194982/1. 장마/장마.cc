#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
  int N, M;
  cin >> N >> M;
    
  vector<int> H(N);
  for (int i = 0; i < N; ++i) 
	{
      cin >> H[i];
  }
    
  set<int> rain;
  for (int day = 1; day <= M; ++day) 
	{
      int s, e;
      cin >> s >> e;
        
      for (int i = s - 1; i <= e - 1; ++i) 
			{
          H[i] += 1;
          rain.insert(i);
      }
        
      if (day % 3 == 0) 
			{
          for (auto j : rain) 
					{
               H[j] -= 1;
          }
            rain.clear();
      }
  }
    
  for (int i = 0; i < N; ++i) 
	{
      cout << H[i] << " ";
  }
  
 
}

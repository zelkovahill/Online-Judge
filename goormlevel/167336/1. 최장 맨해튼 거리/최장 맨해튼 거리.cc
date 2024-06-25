#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int manhattan(int x1,int y1,int x2, int y2)
{
	return abs(x1-x2)+abs(y1-y2);
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	
	cin>>a>>b>>c>>d;
	
	int max_distance =0;
	max_distance=max(max_distance,manhattan(a,b,c,d));
	max_distance=max(max_distance,manhattan(a,c,b,d));
	max_distance=max(max_distance,manhattan(a,d,b,c));
	max_distance=max(max_distance,manhattan(b,c,a,d));
	max_distance=max(max_distance,manhattan(b,d,a,c));
	max_distance=max(max_distance,manhattan(c,d,a,b));

	cout<<max_distance;
	
	
}
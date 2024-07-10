#include <iostream>

using namespace std;

int main()
{
	int t;	// 구름이가 듣는 수업의 개수
	cin>>t;
	
	int lowcnt =0;
	
	for(int i=0;i<t;i++)
	{
		int l;	// 각 과목 별 전체 학생 수
		int s;	// 구름이의 등수
		int n;	// 과목별 A+의 성적 순 비율 
		
		int k;	// 과목의 수행 평가의 개수
		int m;	// A+ 과목의 수행 평가의 과락점수의 기준인 정수
		
		cin>>l>>s>>n>>k>>m;
		
		int average =(n==0) ? l+1:l*n/100;
		
		if(average<s)
		{
			lowcnt++;
		}
		
		for(int j=0;j<k;++j)
		{
			int v;
			cin>>v;
			if(v<m)
			{
				lowcnt++;
			}
		}
		
	}
	
	if(lowcnt>0)
	{
		cout<<"0\n";
	}
	else
	{
		cout<<"1\n";
	}
	
}
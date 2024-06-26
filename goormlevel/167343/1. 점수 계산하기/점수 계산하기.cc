#include <iostream>
#include <string>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	string arr;
	cin>>arr;
	
	int score=0;
	int CorrentCnt=0;
	bool isCorrect;
	
	for(int j=0;j<arr.size();j++)
	{
		if(arr[j]=='O'&&isCorrect)
		{
			CorrentCnt+=1;
			score+=CorrentCnt;
		}
		else if(arr[j]=='O')
		{
			isCorrect=true;
			CorrentCnt =1;
			score+=1;
		}
		else
		{
			isCorrect= false;
		}
	}
	
	cout<<score;
}
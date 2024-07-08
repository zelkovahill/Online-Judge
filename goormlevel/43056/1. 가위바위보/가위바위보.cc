#include <iostream>

#define PLAYER 5

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int player[PLAYER];
	
	int countScissors=0;
	int countRock=0;
	int countPaper=0;
	
	for(int i=0;i<PLAYER;i++)
	{
		cin>>player[i];
		switch(player[i])
		{
			case 1:
				countScissors++;
				break;
			case 2:
				countRock++;
				break;
			case 3:
				countPaper++;
				break;
		}
	}
	
	int result =0;
	
	if((countScissors>0 && countRock>0 && countPaper>0))
	{
		result=0;
	}
	else
	{
		 // 가위가 보를 이기는 경우
        if(countScissors > 0 && countPaper > 0 && countRock == 0) {
            result += countScissors;
        }
        // 바위가 가위를 이기는 경우
        if(countRock > 0 && countScissors > 0 && countPaper == 0) {
            result += countRock;
        }
        // 보가 바위를 이기는 경우
        if(countPaper > 0 && countRock > 0 && countScissors == 0) {
            result += countPaper;
        }
	}
	
	
	cout<<result<<"\n";
	
	
	// 1 가워
	// 2 바위
	// 3 보
	
	// 출력은 승리하는 사람들의 수를 출력
	
	
}


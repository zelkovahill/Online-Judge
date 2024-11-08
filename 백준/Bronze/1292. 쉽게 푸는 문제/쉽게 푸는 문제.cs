string[] input = Console.ReadLine().Split(' ');

int a = int.Parse(input[0]);
int b = int.Parse(input[1]);

int sum = 0;
int currentNumber = 1;  // 수열에서 현재 숫자
int position = 1;  // 수열에서 현재 위치

for(;position<=b;)
{
    for(int i=0; i<currentNumber; i++)
    {
        if(position >= a && position <=b)
        {
            sum += currentNumber;
        }
        position++;        
    }
    currentNumber++;
}

Console.WriteLine(sum);
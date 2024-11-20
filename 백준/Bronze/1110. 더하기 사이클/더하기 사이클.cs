// 입력 받기
int n = int.Parse(Console.ReadLine()!);

int originNumber = n;
int cycleLength = 0;

do
{
    // 각 자리 숫자 분리
    int tens = n / 10;
    int ones = n % 10;

    // 각 자리 숫자 합
    int sum = tens + ones;

    // 새로운 숫자 생성
    n = ones * 10 + sum % 10;

    // 사이클 길이 증가
    cycleLength++;
} while (n != originNumber); // 원래 숫자로 돌아올 때까지 반복

// 결과 출력
Console.WriteLine(cycleLength);

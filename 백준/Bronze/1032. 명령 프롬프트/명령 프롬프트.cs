int n = int.Parse(Console.ReadLine()!); // 파일 이름의 개수
string[] files = new string[n]; // 파일 이름 배열

// 각 파일 이름을 입력 배열에 저장
for (int i = 0; i < n; i++)
{
    files[i] = Console.ReadLine()!;
}

int fileLength = files[0].Length; // 파일 이름의 길이 (모든 파일 이름의 길이는 같음)
string pattern = files[0]; // 초기 파일 이름의 패턴

// 두 번째 파일부터 비교 시작
for (int i = 1; i < n; i++)
{
    char[] newPattern = new char[fileLength]; // 새로운 패턴

    // 각 문자 위치를 순회
    for (int j = 0; j < fileLength; j++)
    {
        // 같은 문자면 그대로, 다른 문자면 ?로 변경
        if (pattern[j] == files[i][j])
        {
            newPattern[j] = pattern[j];
        }
        else
        {
            newPattern[j] = '?';
        }
    }
    pattern = new string(newPattern); // 새로운 패턴으로 갱신
}

Console.WriteLine(pattern); // 결과 출력

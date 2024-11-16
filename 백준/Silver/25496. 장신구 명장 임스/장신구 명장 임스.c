#include <stdio.h>

void bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        arr[j] = arr[j] ^ arr[j + 1];
        arr[j + 1] = arr[j] ^ arr[j + 1];
        arr[j] = arr[j] ^ arr[j + 1];
      }
    }
  }
}

int main()
{
  int p; // 현재 쌓인 피로도
  int n; // 만들 수 있는 장신구의 수

  scanf("%d %d", &p, &n);

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  bubble_sort(arr, n); // 피로도가 낮은 순서대로 정렬

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (p + arr[i] < 200)
    {
      p += arr[i]; // 장신구 제작 후 피로도 증가
      count++;     // 장신구 하나 제작
    }
  }

  // 모든 장신구를 만들지 못했을 때 피로도가 남았다면 마지막 장신구를 하나 더 만들 수 있다
  if (n - count != 0 && p < 200)
  {
    count++;
  }

  printf("%d\n", count); // 제작 가능한 장신구의 최대 개수 출력
  return 0;
}
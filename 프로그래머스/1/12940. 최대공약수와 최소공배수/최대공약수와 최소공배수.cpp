#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m)
{
  int num1 = n;
  int num2 = m;

  for (; m != 0;)
  {
    int temp = m;
    m = n % m;
    n = temp;
  }

  int gcd = n;
  int lcm = num1 * num2 / gcd;

  vector<int> result{gcd, lcm};

  return result;
}
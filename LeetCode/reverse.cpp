#include <iostream>
#include <math.h>

using namespace std;

int reverse(int x)
{

  if (x >= INT_MAX)
    return 0;

  bool neg;
  int n;
  (x < 0) ? neg = true : neg = false;
  int m = n = abs(x);
  int count = 0;

  while (n > 0)
  {
    count++;
    n /= 10;
  }

  int temp = 0;
  // int ind=count;

  while (count--)
  {
    temp += (m % 10) * pow(10, count);
    m /= 10;
  }

  (neg) ? temp = temp - (temp * 2) : temp;

  return temp;
}

int main()
{
  int n;

  cin >> n;

  cout << reverse(n) << endl;
}

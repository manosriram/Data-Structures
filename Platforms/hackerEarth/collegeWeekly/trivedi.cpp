#include <iostream>
#include <string.h>

using namespace std;

int factorial(int n)
{
  if (n==0)
  return 1; 
  else
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
  
}

int main() {
    int count=0;
    int t,T;
    int g,b;
    char str[1000];
    
    cin >> T;

    while(T--) {
    cin >> g;
    
    //for (t=0;t<g;t++)
    cin >> str;

    for (t=0;t<strlen(str);t++) {
        if (str[t] == 'b') {
            if (str[t+1] == 'a' || str[t-1] == 'a')
            count++;
        }
        

        else 
        continue;
    }

long long int x = factorial(count);
cout << (x % 1000000007) << '\n';
// count=0;
    }
}
#include <iostream>
#include <algorithm>

using namespace std;

int i,max,grab;

int maximum(int a[40],int max) {
    for (i = 0; i < 4; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
    }

return max;  
}


int main() {
int a[40],result;

for (int t=0;t<4;t++)
cin >> a[t];

result = maximum(a,grab);
cout << result;

}
#include <iostream>

using namespace std;
    
int main() {
     
    int *st1,*st2,*end1,*end2,*st3,*end3;
    int a[30],n,r;
    int temp;
    cin >> n >> r;
    for (int t=0;t<n;t++)
    cin >> a[t];

    st1 = &a[0];
    end1 = &a[n-r-1];
    st2 = &a[r+1];
    end2 = &a[n-1];
    st3 = &a[0];
    end3 = &a[n-1];
    

    for (int i=0;i<n-r;i++) {
        if (st1 < end1) {
            temp = *st1;
            *st1 = *end1;
            *end1 = temp;

            st1 += 1;
            end1 -= 1;
        }
    }

    for (int j=r+1;j<n;j++) {
        if (st2 < end2) {
            temp = *st2;
            *st2 = *end2;
            *end2 = temp;

            st2 += 1;
            end2 -= 1;
        }
    }

    while (st1<end2) {
        temp = *st3;
        *st3 = *end3;
        *end3 = temp;

        st3 += 1;
        end3 -= 1;
    }

    for (int i=0;i<n;i++)
    cout << a[i] << endl ;
    
}

#include <iostream>
#include <iomanip>


using namespace std;


int main() {
    int n,a[n-1],t,l;
    int negative,positive,zero;
    float result,result1,result2;

    cin>>n;
    
    for (t=0;t<n;t++){
    cin>>a[t];
    }

    for (l=0;l<n;l++) {
        if (a[l]<0){
            negative++;
        }
        if (a[l]>0) {
            positive++;
        }
        if (a[l]==0) {
            zero++;
        }
    }

    result = negative/n;
    result1 = positive/n;
    result2 = zero/n;

    std::cout << std::setprecision(6) << result << endl;
    std::cout << std::setprecision(6) << result1 << endl;
    std::cout << std::setprecision(6) << result2 << endl;

    }
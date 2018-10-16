#include <iostream>

using namespace std;

long long int maxNum(long long int newArr[5]) {
    int t1;
    long long int maxNum1 = newArr[0];
    for (t1=0;t1<5;t1++) {
        if (newArr[t1] > maxNum1) {
            maxNum1 = newArr[t1];
            
        }
    }
    return maxNum1;
}

long long int minNum(long long int newArr[5]) {
    int t2;
    long long int minNum1 = newArr[0];
    for (t2=0;t2<5;t2++) {
        if (newArr[t2] < minNum1) {
            minNum1 = newArr[t2];
            
    }

}
return minNum1;
}


int main() {
    long long int a[5],sum=0;
    int t;
    long long int sumOne,sumTwo,sumThree,sumFour,sumFive,maximum,minimum;
    
    for (t=0;t<5;t++) {
    cin>>a[t];
    }

    for (t=0;t<5;t++){ 
        sum = sum + a[t];
    }

    sumOne = sum - a[0];
    sumTwo = sum - a[1];
    sumThree = sum - a[2];
    sumFour = sum - a[3];
    sumFive = sum - a[4];

    long long int newArr[5] = {sumOne,sumTwo,sumThree,sumFour,sumFive};
    maximum = maxNum(newArr);
    minimum = minNum(newArr);
    cout<<minimum<<" "<< maximum;
}
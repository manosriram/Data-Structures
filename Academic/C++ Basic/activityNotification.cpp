#include <iostream>
#include <algorithm>

using namespace std;
int num=0;
int notifications=0;
// int sortArray() {
//     int low,high,i,j,pivot,temp;
//     low = a1[0];
//     high = a1[n-d];
//     pivot = a1[low];
//     i = low+1;
//     j = high;
//     while (i<=j) {
//         while (a1[i]<pivot && i<=high) {
//             i++;
//         }
//         while (a1[j] > pivot)
//         j--;

//         if (i<j) {
//             temp = a1[i];
//             a1[i] = a1[j];
//             a1[j] = temp;
//         }
//         else {
//             i++;
//             a1[low] = a1[j];
//             a1[i] = pivot;
//             return j;
//         }
//     }
// }

float findMedian(int a1[],int n,int d) {
    float median,ret;
    median = a1[(n-d)/2];
    return median;
}

void shiftRight(int a1[],int a[],int n,int d){
int t;
 for (t=num;t<n-d;t++) {
     a1[t]=a[t];
 }
 num++;   
}

int main() {
    int t,a[200],a1[200],n,d,exp,sorted;
    float foundMedian;
    
    cin >> n >> d;
    
    //Scan the Expenditure Array...
    for (t=0;t<n;t++)
    cin>>a[t];


    for (t=0;t<n-d;t++) {
    shiftRight(a1,a,n,d);
    std::sort(std::begin(a1), std::end(a1));
    foundMedian = findMedian(a1,n,d);
    exp = a[n-d+1];

    if (exp >= 2 * foundMedian) {
        notifications++;
    }
    else {
        continue;
    }

    }
cout<<notifications;
}

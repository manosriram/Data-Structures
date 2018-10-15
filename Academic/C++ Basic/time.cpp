#include <iostream>

using namespace std;

int hr,min;

int main() {

objCalled[60] = {
"one",
"two",
"three",
"four",
"five",
"six",
"seven",
"eight",
"nine",
"ten",
 "eleven",
 "twelve",
 "thirteen",
 "fourteen",
 "fifteen",
 "sixteen",
 "seventeen",
 "eighteen",
 "nineteen",
 "twenty",
 "twenty one",
 "twenty two",
 "twenty three",
 "twenty four",
 "twenty five",
 "twenty six",
 "twenty seven",
 "twenty eight",
 "twenty nine",
 "thirty",
 "thirty one",
 "thirty two",
 "thirty three",
 "thirty four",
 "thirty five",
 "thirty six",
 "thirty seven",
 "thirty eight",
 "thirty nine",
 "fourty",
 "fourty one",
 "fourty two",
 "fourty three",
 "fourty four",
 "fourty five",
 "fourty six",
 "fourty seven",
 "fourty eight",
 "fourty nine",
 "fifty",
 "fifty one",
 "fifty two",
 "fifty three",
 "fifty four",
 "fifty five",
 "fifty six",
 "fifty seven",
 "fifty eight",
 "fifty nine",
 "sixty",

};

cin >> hr;
cin >> min;

if (min == 0)
cout << hr << " o'clock" << endl;

if (min==30)
cout << " half past " << hr << endl;

if (min==45)
cout << " quarter to " << hr << endl;

if (min > 0 && min < 30)
cout << objCalled[min-1] << " minute past " << hr << endl;

}
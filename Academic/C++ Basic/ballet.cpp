#include <iostream>

using namespace std;

int main() {
    static int one,two,three,four,five,invalid;
    int t,ch;
while(1) {
    cout << "Choose Your Vote : " <<endl;
    cout << "1. One " << endl;
    cout << "2. Two " << endl;
    cout << "3. Three " << endl;
    cout << "4. Four " << endl;
    cout << "5. Five " << endl;
    cout << "6. Exit " << endl;

    cin>>ch;
switch(ch) {
    case 1:
    one++;
    break;

    case 2:
    two++;
    break;

    case 3:
    three++;
    break;

    case 4:
    four++;
    break;

    case 5:
    five++;
    break;
     
    case 6:
    cout << "Number of Votes for One : " << one << endl; 
    cout << "Number of Votes for Two : " << two << endl; 
    cout << "Number of Votes for Three : " << three << endl; 
    cout << "Number of Votes for Four : " << four << endl; 
    cout << "Number of Votes for Five : " << five << endl; 
    cout << "Number of Invalid Attempts : " << invalid <<endl; 
    exit(0);

    default:
    invalid++;
    
}
}
}
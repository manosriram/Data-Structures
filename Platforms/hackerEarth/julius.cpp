#include <iostream>

using namespace std;



int pal(char name[100],int len,int t,int flag) {
    for (t=0;name[t]!='\0';t++) {
        len++;
    }

    for (t=0;t<len;t++) {
        if (name[t]!=name[len-1-t]) {
            flag = 1;
            break;
        }
    }

    if (flag) {
        return flag;
    }
    
    else 
    cout << "Palindrome" << endl;  
    
}



int main() {
    int n,len=0;
    char name[100];
    int pro;
    int check1;
    int check,t,i;
    int flag=0;
    
 
    cin >> name;

    check = pal(name,len,t,flag);

    if (check == 0) {
        for (i=0;i<len;i++) {
            for (t='a';t<'z';t++) {
                if (name[i] == t) {
                    cout << "hi";
                }
            }
        }
        cout << pro << endl;
    }

    

}
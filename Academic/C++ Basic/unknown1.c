#include <stdio.h>

int main() {
    char inp[30];
    int t,count=0;

    scanf("%s",inp);
    
    for (t='a';t<='z';t++) {
        if (inp[count]==t) {
        printf("%c",inp[count]);
        count++;
        }
        else {
        count++;
        continue;}
    }
}
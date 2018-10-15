#include <stdio.h>

main() {

int n1,n,facs=0,t;

printf("Enter any Number:");
scanf("%d",&n);

n1 = n/2;

for (t=1;t<=n1;t++) {
if (n1%t==0) {
facs++;
}
else {
continue;
}
}

if (facs > 2 ) {
printf("Not Prime!!");
}
else
printf("Prime!!");

}

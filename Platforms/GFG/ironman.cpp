#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[80];
	int i=0,len,j,flag=0;
    int counted=0,test;
    string load[100];
    static int count;

    cin >> test;

    while(counted < test) {

	gets(str);
	len=strlen(str);

	for(i=0; i<len; i++)
	{
		if(str[i]==' ')
		{
			for(j=i; j<len; j++)
			{
				str[j]=str[j+1];
			}
		len--;
		}
	}
	
    for (int t=0;str[t]!='\0';t++) {

        if (str[t]!=str[len-1-t]) {
        flag=1;
        break;
        }
        
        else
        continue;
    }

    if (flag)
    load[counted] = "NO";

    else
    load[counted] = "YES";
       
    counted++;
    flag=0;
    len=0;

    }

    for (int t=0;t<counted;t++)
    cout << load[t] << '\n';
}
#include<iostream>
 
using namespace std;
 

char sendArr(char a[100],int len,int i,int j,int k) {
    

        for (i=0;a[i]!='\0';i++)
        len++;
        
    for(i=0;i<len;++i)
        for(j=i+1;j<len;)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<len-1;++k)
                    a[k]=a[k+1];
                    
                --len;
            }
            else
                ++j;
        }
    
    cout<<"\n";
    return a[100];

}

int main()
{
    int i,j,k,len=0;
    char a[100];
    char a1[100],a2[100];
    
    cin >> a1;
    cin >> a2;

    sendArr(a1,len,i,j,k);
    sendArr(a2,len,i,j,k);
    
    }

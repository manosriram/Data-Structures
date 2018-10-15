#include<iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main()
{
	int i,n=0,j,o,k,p,x,y,l,flag;
	char t,a[20],b[20];
	cin>>p;
	for(k=0;k<p;k++)
	{
	l=0;
	flag=0;
	cin>>a;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	cin>>x>>y;
	if((x+y)<n)
	{
	h:
		l++;
	 for(j=0;j<x;j++)
	{
		for(i=n-1;i>0;i--)
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
		}
	}

	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			break;
		}
		else
		{
			flag=1;
			
		}
	}
	if(flag!=1)
	{
		l++;
		for(j=0;j<y;j++)
	{
		for(i=n-1;i>0;i--)
		{
			t=a[i];
			a[i]=a[i-1];
			a[i-1]=t;
		}
	}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			break;
		}
		else
		{
			flag=1;
			
		}
	}
	if(flag!=1)
	{
		goto h;
	}
	}
	else
	{
		cout<<"-1";
	}
	cout<<l;
	}
	getch();
	return 0;
}

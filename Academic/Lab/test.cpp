#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class rotation
{
	char s[50];
	int m,p,c,l,n,b,track;
	public:
		void getvalues()
		{
			track=0;
			cout<<"Enter String 1:\n";
			cin>>s;
			cout<<"Enter Number of rotations of monkey and po(i.e.,m and p):";
			cin>>m>>p;
			l=strlen(s);
		}
		int rotate(int h)
		{
			int temp;
			track++;
			cout<<"track:\n"<<track;
			for(int i=0;i<h;i++) 
			{
    		temp = s[0];
    		for (int t=0;t<l;t++) 
			{
        	s[t] = s[t+1];
    		}
  			  s[l-1]= temp;
			}
			return track;
		}
	int evaluation()
	{
		
    	char str[50];
    	strcpy(str,s);
		for(int t=0;t<l-(m+p);t++) 
		{
    	track = rotate(m);
    	if(strcmp(str,s)==0)
    	{
    	return track;
		}
    	track = rotate(p);
		if(strcmp(str,s)==0)
		{
    	return track;
		}
		}
	}
		void print(int i)
		{
			cout<<"String :"<<i<<"\n"<<track<<endl;
		}
};
int main()
{
	rotation o;
	int r;	
	cout<<"Enter Range:\n";
	cin>>r;
	for(int i=0;i<r;i++)
	{
	o.getvalues();
	o.evaluation();
	o.print(i);
	}
	getch();
	return 0;
}
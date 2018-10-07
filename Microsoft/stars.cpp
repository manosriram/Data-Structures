#include<iostream>
#include<string.h>
using namespace std;
int weekday(char* d1)
{
	if(strcmp(d1,"sunday")==0||strcmp(d1,"Sunday")==0)
	return 0;
	else if(strcmp(d1,"monday")==0||strcmp(d1,"Monday")==0)
	return 1;
	else if(strcmp(d1,"tuesday")==0||strcmp(d1,"Tuesday")==0)
	return 2;
	else if(strcmp(d1,"wednesday")==0||strcmp(d1,"Wednesday")==0)
	return 3;
	else if(strcmp(d1,"thursday")==0||strcmp(d1,"Thursday")==0)
	return 4;
	else if(strcmp(d1,"friday")==0||strcmp(d1,"Friday")==0)
	return 5;
	else if(strcmp(d1,"saturday")==0||strcmp(d1,"Saturday")==0)
	return 6;
	else
	return 7;	
}
int leapyear(int yy)
{
	if(yy%4==0)
	{
		if(yy%100==0)
		{
			if(yy%400==0)
			return 0;
			else
			return 1;
		}
		return 0;
	}
	else
	return 1;
}
int month(int mm,int yy)
{
	switch(mm)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;break;
		case 4:case 6:case 9:case 11:
			return 30;break;
		case 2:
			if(leapyear(yy)==0)
			{
				return 29;break;
			}
			else 
			{
				return 28;break;
			}
	}
}
int days(int dd1,int dd2,int mm1,int mm2,int yy)
{
	int ret=0;
	for(int i=mm1+1;i<mm2;i++)
	{
		ret=ret+month(i,yy);
	}
	if(mm1==mm2)
	return dd2-dd1+1;
	else
	ret=(month(mm1,yy)-dd1+1)+ret+dd2;
	return ret;
}
class countstars
{
	public:
		int stars,dd1,dd2,mm1,mm2,yy1,yy2,dfyr,dlyr,yrd,remainingdays;
		char d1[100],d2[100];
		char* day1,day2;
		void getvalues()
		{
			int k=0;
			cout<<"Enter start date"<<endl;
			while(k==0){
				try{
					cin>>dd1>>mm1>>yy1;
					if(mm1>=13)
					throw "month error (greater than 12)";
					else if(mm1==1||mm1==3||mm1==5||mm1==7||mm1==8||mm1==10||mm1==12)
					{
						if(dd1>=32)
						throw "wrong number of days in that month";
						else
						break;
					}
					else if(mm1==4||mm1==6||mm1==9||mm1==11&&dd1>=31)
					{
						if(dd1>=31)
						throw "wrong number of days in that month";
						else
						break;
					}
					else if(mm1==2){
						if(leapyear(yy1)==0&&dd1>=30)
						throw "wrong number of days in that month";
						else if(leapyear(yy1)==1&&dd1>=29)
						throw "wrong number of days in that month";
						else 
						break;
						}
					else
					break;}
					catch(const char* msg){
						cout<<msg<<endl;
					}
			}
			cout<<"Enter start day"<<endl;
			while(1){
				try{
				cin>>d1;
				if(weekday(d1)>=0&&weekday(d1)<=6)
				break;
				else
				throw "No such weekday exist";
				}catch(const char* msg)
				{
				cout<<msg<<endl;
				}
				}
			cout<<"Enter end date"<<endl;
			while(k==0){
				try{
					cin>>dd2>>mm2>>yy2;
					if(mm1>=13)
					throw "month error (greater than 12)";
					else if(mm2==1||mm2==3||mm2==5||mm2==7||mm2==8||mm2==10||mm2==12)
					{
						if(dd2>=32)
						throw "wrong number of days in that month";
						else
						break;
					}
					else if(mm2==4||mm2==6||mm2==9||mm2==11)
					{
						if(dd2>=31)
						throw "wrong number of days in that month";
						else
						break;
					}
					else if(mm2==2){
						if(leapyear(yy2)==0&&dd2>=30)
						throw "wrong number of days in that month";
						else if(leapyear(yy2)==1&&dd2>=29)
						throw "wrong number of days in that month";
						else 
						break;
						}
					else
					break;}
					catch(const char* msg){
						cout<<msg<<endl;
					}
			}
		}
		int evaluate()
		{
			yrd=yy2-yy1;
			switch(yrd)
			{
				case 0:
					{
						return days(dd1,dd2,mm1,mm2,yy1);
					}break;
				case 1:
					{
						int ret;
						dfyr=days(dd1,31,mm1,12,yy1);
						dlyr=days(1,dd2,1,mm2,yy2);
						ret=dfyr+dlyr;
						return ret;
					};break;
				default:
					{
						int ret=0;
						dfyr=days(dd1,31,mm1,12,yy1);
						dlyr=days(1,dd2,1,mm2,yy2);
						for(int i=yy1+1;i<yy2;i++)
						{
							ret=ret+days(1,31,1,12,i);
						}
						ret=ret+dfyr+dlyr;
						return ret;
					};break;
			}
		}
		void count()
		{
			int totaldays;
			totaldays=evaluate();
			if(totaldays%4==0)
			{
				stars=0;
			}
			else if(weekday(d1)==0&&(totaldays-1)%7==0)
			{
				stars=0;
			}
			else if(weekday(d1)!=0)
			{
				if(((totaldays-(7-weekday(d1)))-1)%7==0)
				{
					stars=0;
				}
				else 
				stars=50;
			}
			remainingdays=totaldays%7;
		}
		void print()
		{
			char* ptr[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
			cout<<"Stars="<<stars<<endl;
			cout<<"Ending Week Day->"<<ptr[weekday(d1)+remainingdays-1];
		}
};
int main()
{
	countstars o;
	o.getvalues();
	//cout<<o.evaluate();
	o.count();
	o.print();
	getch();
	return 0;
}
#include <iostream>
using namespace std;
int check=0;
int code;

class staff {
	public:
		
		void getCode() {
			cin >> code;
		}
};

class teacher:public staff {
public:

void search() {
int id[5] = {123,234,345,456,567};
if (id[0] == code) {
	cout <<'\n';
	cout << "Name : OneTwoThree" << '\n';
	cout << "Designation : Teacher" << '\n';
	cout << "Subject : Physics " << '\n';
	cout << "Age : 25" << '\n';
	check=1;
}

if (id[1] == code) {
	cout <<'\n';
	cout << "Name : Monica Madam" << '\n';
	cout << "Designation : Teacher" << '\n';
	cout << "Subject : OOP with C++ " << '\n';
	cout << "Age : 27" << '\n';
	check=1;
}

if (id[2] == code) {
	cout <<'\n';
	cout << "Name : Einstein" << '\n';
	cout << "Designation : Teacher" << '\n';
	cout << "Subject : Theoretical Physics " << '\n';
	cout << "Age : 57" << '\n';
	check=1;
}
if (id[3] == code) {
	cout <<'\n';
	cout << "Name : Newton" << '\n';
	cout << "Designation : Teacher" << '\n';
	cout << "Subject : Gravitational Physics " << '\n';
	cout << "Age : 45" << '\n';
	check=1;
}
if (id[4] == code) {
	cout <<'\n';
	cout << "Name : Bill Gates" << '\n';
	cout << "Designation : Teacher" << '\n';
	cout << "Subject : Operating System" << '\n';
	cout << "Age : 51" << '\n';
	check=1;
}
}

bool checkStat() {
	if (check)
	return 1;
	
	else
	return 0;
}
};

class typist:public staff {
	public:	
	void searchOne() {
    int id1[5] = {111,222,333,444,555};
			if (id1[0] == code) {
			cout <<'\n';
           	cout << "Typist Name : Steve Wozniak" << '\n';
	        cout << "Typing Speed : 54 WPM" << '\n';
            cout << "Age : 25" << '\n';
            check=1;
}
if (id1[1] == code) {
	cout <<'\n';
	cout << "Typist Name : Elon Musk" << '\n';
	cout << "Typing Speed : 60WPM" << '\n';
	cout << "Age : 45" << '\n';
	check=1;
}
if (id1[2] == code) {
	cout <<'\n';
	cout << "Typist Name : MBHK" << '\n';
	cout << "Typing Speed : 23WPM" << '\n';;
	cout << "Age : 31" << '\n';
	check=1;
}

if (id1[3] == code) {
	cout <<'\n';
	cout << "Typist Name : Ranjith" << '\n';
	cout << "Typing Speed : 27WPM" << '\n';
	cout << "Age : 47" << '\n';
	check=1;
}

if (id1[4] == code) {
	cout <<'\n';
	cout << "Typist Name : Barath" << '\n';
	cout << "Typing Speed : 45WPM" << '\n';
	cout << "Age : 20" << '\n';
	check=1;
}
}
	bool checkStat() {
	if (check)
	return 1;

	else
	return 0;
}
};

class regularTypist:public typist {
public:
void searchOne() {
	
    int id1[5] = {111,222,333,444,555};
    if (id1[0] == code) {
    	cout <<'\n';
   	cout << "Type : Regular Typist" << '\n';
   	cout << "Salary : Rs.12000/-" << '\n';
   	check=1;
}

if (id1[2] == code) {
	cout <<'\n';
cout << "Type : Regular Typist" << '\n';
cout << "Salary : Rs.17000/-" << '\n';
	check=1;
}

if (id1[4] == code) {
	cout <<'\n';
cout << "Type : Regular Typist" << '\n';
cout << "Salary : Rs.30000/-" << '\n';
check=1;
}
}
bool checkStat() {
if (check)
return 1;
else
return 0;
}
};

class casualTypist:public typist {
	public:
	void searchOne() {
    int id1[5] = {111,222,333,444,555};
    if (id1[1] == code) {
    	cout <<'\n';
   	cout << "Type : Casual Typist" << '\n';
   	cout << "Daily Wage : Rs.1025/-" << '\n';
   	check=1;
}

if (id1[3] == code) {
	cout <<'\n';
cout << "Type : Casual Typist" << '\n';
cout << "Daily Wage : Rs.5555/-" << '\n';
	check=1;
}

}
bool checkStat() {
if (check)
return 1;
else
return 0;
}
};

class officer:public staff {
	public:
	void officerSearch() {	
	int id2[5] = {1025,2024,3035,5051,4564};
	int salary[5] = {100000,251205,1215,121799,123456};
	
	
	if (id2[0] == code) {
		cout <<'\n';
		cout << "Name : Shashank" << '\n';
		cout << "Designation : OFFICER" << '\n';
		cout << "Salary : " << "Rs." << salary[0] << "/-";
	}
	
	if (id2[1] == code) {
		cout <<'\n';
		cout << "Name : Ram" << '\n';
		cout << "Designation : OFFICER" << '\n';
		cout << "Salary : " << "Rs." << salary[1] << "/-";
	}
	if (id2[2] == code) {
		cout <<'\n';
		cout << "Name : Murthy" << '\n';
		cout << "Designation : OFFICER" << '\n';
		cout << "Salary : " << "Rs." << salary[2] << "/-";
	}
	if (id2[3] == code) {
		cout <<'\n';
		cout << "Name : Krishna" << '\n';
		cout << "Designation : OFFICER" << '\n';
		cout << "Salary : " << "Rs." << salary[3] << "/-";
	}
	if (id2[4] == code) {
		cout <<'\n';
		cout << "Name : Krishna" << '\n';
		cout << "Designation : OFFICER" << '\n';
		cout << "Salary : " << "Rs." << salary[4] << "/-";
}
}
};

int main() {
	staff o1;
	teacher o2;
	typist o3;
	regularTypist o4;
	casualTypist o5;
	officer o6;
	int number;
	//cout << "Available IDs : " << '\n';
	//cout << '\n';
	//cout << 111 << " " <<  3035 << " " << 222 << " " << 2024 << '\n' << 333 << " " << 456 << " " << 444 << " " << 567  << '\n' << 1025  << " " << 234 << " " << 123 << " " << 5051 << '\n' << 4564;
	//cout << '\n';
	//cout << '\n';
	
	cout << "Enter Number Of Employees:" << '\n';
	cin >> number;
	
	int array[number];
	int id[number];
	string name[number],des[number];
	
	for (int t=0;t<number;t++) {
		cout << "Enter ID : " << '\n';
		cin >> id[t];
		
		cout << "Enter Name :" << '\n';
		cin >> name[t];
		
		cout << "Enter Designation : " << '\n';
		cin >> des[t];
	}
	
	o1.getCode();
	
	o2.search();
	int n = o2.checkStat();
	if (n)
	exit(0);
	
	o3.searchOne();
	n = o3.checkStat();
	if (n) {
		o4.searchOne();
		int m = o4.checkStat();
		
		if (m)
		o5.searchOne();
}
    o6.officerSearch();	
}
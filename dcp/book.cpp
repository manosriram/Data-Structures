#include <iostream>
using namespace std;

void bookTicket(int n,int seats[],int tickets[]) {
	int t1,k,i,j;
	
	for (t1=0;t1<n;t1++) {
		for (k=1;k<41;k++) {
			if (seats[k] == tickets[t1]) {
			   for (i=k;i<42;i++) {
  	   		    seats[i] = seats[i+1];
			   }	
			}
		}
	}
}


int main() {
	int seats[50],tickets[50],t,i,j,n;
	
	for (t=1;t<41;t++)
	seats[t] = t;
h:	
	cout << "Available Seats " << '\n';
	for (t=1;t<41-n;t++) {
		if (t%5==0) {
		cout << "\n";		
		cout << "\n";
		}
		cout << seats[t] << " ";
	}

	
	cout << '\n' << "Enter Number of Seats to be Booked :" << "\n";
	cin >> n;
	
	cout << '\n';
	
	if (n==0) {
	cout << "Please Select Atleast One Seat.." << '\n';
	goto h;
}
	

	else {	
	cout << "Enter Seat Numbers (Max. 40) : " << '\n' << '\n';
	
	
	
	for (t=0;t<n;t++)
	cin >> tickets[t];
	
	bookTicket(n,seats,tickets);
	
	cout << '\n';
	
	if (n==1) {
	cout << "Ticket Booked!!"<< '\n';
	cout << '\n';
}

	
//	cout << '\n';
		
	else {
	cout << "Tickets Booked!!" << '\n';
	cout << '\n';
}
	
	
	
	for (t=1;t<41-n;t++) {
		
		if (t%5==0) {
		cout << "\n";		
		cout << "\n";
		}
		cout << seats[t] << " ";
		
	}
 	cout << '\n';
	}
	cout << '\n';
	cout << "------------------------------------------------------------" << '\n';
	cout << "Total Cost : " << n*125 << '\n';
	cout << "------------------------------------------------------------" << '\n';
	}
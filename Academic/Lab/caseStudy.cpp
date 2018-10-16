#include <iostream>

using namespace std;

int main() {
    int n,day,month,year;
    int year1;
    float ctc;
    char a;
    int t,i,j,cnt=0;
    float finyear=0.11,annyear=0.12;
    float pfc=0,pfi=0,pf=0;
    year1 = year;

//Input Parameters...
    cin >> day >> a >> month >> a >> year;
    cin >> ctc;
    cin >> n;

    for (t=1;t<=n;t++) {

// if (month != 4 && year==year1) {
        if (t>=4 && t<8) {
            finyear = 0.09;
        }
        if (t>=8) {
            finyear = 0.06;
        }

        if (t==8) {
            annyear=0.15;
        }
        if (t!=4 && t!=8) {
            annyear = 0.12;
        }
        

        if (t!=4 || t!=8 || t!=5 || t!=9) {
        ctc += (ctc * 0.12);
        pfc += (ctc * 0.12);
        pfi += (pfc * 0.12);
        pf += pfc + pfi;
    }

    if (t==4) {
        ctc += (ctc * 0.2);
        pfc += (ctc * 0.12);
        pfi += (pfc * 0.12);
        pf += pfc + pfi;
    }

    if (t==5) {
        ctc += (ctc * annyear);
        pfc += (ctc * 0.12);
        pfi += (pfc * 0.12);
        pf += pfc + pfi;
    }
    
    if (t==9) {
        ctc += (ctc * annyear);
        pfc += (ctc * 0.12);
        pfi += (pfc * 0.12);
        pf += pfc + pfi;
    }

    if (t==8) {
        ctc += (ctc * annyear);
        pfc += (ctc * 0.12);
        pfi += (pfc * 0.12);
        pf += pfc + pfi;
    }
    year1++;
    }

     
    // }

    // cout << pf << " " << ctc;
    cout << pf << '\n';
    cout << ctc;
    cout << endl;
    
}
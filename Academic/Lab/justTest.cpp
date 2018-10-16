#include <iostream>
using namespace std;

static int cnt;
int n,prof,searchID,nty;
int speed[100],wage[100],flag[100];
string desg[100],name[100],profession[100],type[100],sub[100];
int id[100];

class staff {
    public:

    void getInfo() {
        cout << "Enter ID : " << '\n';
        cin >> id[cnt];
        cout << "Enter Name : " << '\n';
        cin >> name[cnt];
    }

};


class teacher:public staff {
    public:
    void getInfo() {
        profession[cnt] = "Teacher";
        
        cout << "Enter Subject :" << '\n';
        cin >> sub[cnt];
        cout << '\n';
        cout << "Data Stored!" << '\n';
        cout << '\n';
        speed[cnt] = 0;
        flag[cnt]=0;
        type[cnt] = " ";
        desg[cnt] = " ";
    }
};

class typist:public staff {
    public:
    void getInfo() {
        profession[cnt] = "Typist";
        cout << "Enter WPM : " << '\n';
        cin >> speed[cnt];
        cout << "Select Type : " << '\n' << "1. Regular." << '\n' << "2. Casual." << '\n';
        cin >> nty;
        flag[cnt]=1;
        type[cnt] = " ";
        sub[cnt] = " ";
        desg[cnt] = " ";
    }
};

class officer:public staff {
    public:
    void getInfo() {
        profession[cnt] = "Officer";
        cout << "Enter Grade : " << '\n';
        cin >> desg[cnt];
        cout << '\n';
        cout << "Data Stored!" << '\n';
        cout << '\n';
        speed[cnt] = 0;
        flag[cnt]=0;
        type[cnt] = " ";
        sub[cnt] = " ";
    }
};

class regular:public typist {
public:
void grabInfo() {
    type[cnt] = "Regular Typist.";
    cout << '\n';
    cout << "Data Stored!" << '\n';
    cout << '\n';
}
};

class casual:public typist {
public:
void grabInfo() {
    type[cnt] = "Casual Typist.";
    cout << "Enter Daily Wage : " << '\n';
    cin >> wage[cnt];
    cout << '\n';
    cout << "Data Stored!" << '\n';
    cout << '\n';
}
};
int main() {
    staff o;
    teacher o1;
    typist o2;
    officer o3;
    regular o4;
    casual o5;
while(1) {
    cout << '\n';
    cout << "Select Any One : " << '\n';
    cout << "1. Add an Employee." << '\n' << "2. Get Details of an Employee." << '\n' << "3. Quit."<< '\n';
    cin >> n;

    switch(n) {
        case 1:
        cout << "Select Profession : " <<  '\n' << "1. Teacher." << '\n' << "2. Typist." << '\n' << "3. Officer." << '\n';
        cin >> prof;

        if (prof==1) {
        o.getInfo();
        o1.getInfo();
        cnt++;
        }

        if (prof==2) {
        o.getInfo();
        o2.getInfo();
        
        if (nty == 1) 
        o4.grabInfo();
        if (nty == 2)
        o5.grabInfo();
        
        cnt++;
        }

        if (prof==3) {
        o.getInfo();
        o3.getInfo();
        cnt++;
        }
        break;

        case 2:
        cout << "Available IDs : " << '\n';
        for (int t=0;t<cnt;t++) {
            cout << id[t] << " ";
        }
        cout << '\n';
        cout << "Enter ID of the Employee : " << '\n';
        cin >> searchID;
        
        cout << '\n';

        for (int t=0;t<cnt;t++) {
            if (id[t] == searchID) {
                cout << "-------------------------------------------------------------------------------" << '\n';
                if (!flag[t])
                cout << "ID : " << id[t] << '\n' << "Name of the Employee : " << name[t] << '\n' << "Designation : " << profession[t] << '\n' << "Subject : " << sub[t] << '\n';

                if (flag[t]) {
                cout << "ID : " << id[t] << '\n' << "Name of the Employee : " << name[t] << '\n' << "Designation : " << profession[t] << '\n' << "WPM : " << speed[t] << '\n';
                cout << "Type : " << type[t] << '\n';
                }

                if (type[t] == "Casual Typist.")
                cout << "Daily Wage : " << wage[t] << '\n';

                cout << "-------------------------------------------------------------------------------" << '\n';
            }
        }
        break;

        case 3:
        exit(0);

    }

}
}
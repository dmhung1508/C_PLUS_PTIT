#include <bits/stdc++.h>

using namespace std;

class Employee {
public:
    string name;
    string gender;
    string dob;
    string address;
    string taxCode;
    string contractDate;
    int code;

    friend istream& operator>>(istream& in, Employee& emp) {
        static int nextCode = 1;
        emp.code = nextCode++;
        getline(in >> ws, emp.name);
        in >> emp.gender >> emp.dob;
        getline(in >> ws, emp.address);
        in >> emp.taxCode >> emp.contractDate;

        return in;
    }

    friend ostream& operator<<(ostream& out, const Employee& emp) {
        out << setfill('0') << setw(5) << emp.code << " ";
        out << emp.name << " ";
        out << emp.gender << " ";
        out << emp.dob << " ";
        out << emp.address << " ";
        out << emp.taxCode << " ";
        out << emp.contractDate << endl;

        return out;
    }
};

bool compare(Employee a, Employee b) {
    string adob = a.dob.substr(6, 4) + a.dob.substr(3, 2) + a.dob.substr(0, 2);
    string bdob = b.dob.substr(6, 4) + b.dob.substr(3, 2) + b.dob.substr(0, 2);
    return adob <= bdob;
}

void SortingEmployees(Employee ds[], int N) {
    sort(ds, ds + N, compare);
}
int main(){
    Employee ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    SortingEmployees(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
struct Employee {
    string name;
    string gender;
    string dob;
    string address;
    string taxid;
    string contractdate;
};

void input(Employee &emp) {
    string n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    emp.name = n1 + ' ' + n2 + ' ' + n3;
    cin.ignore();
    getline(cin, emp.gender);
    getline(cin, emp.dob);
    getline(cin, emp.address);
    getline(cin, emp.taxid);
    getline(cin, emp.contractdate);
}

void printlist(Employee lst[], int N) {
    for (int i = 0; i < N; i++) {
        cout << setfill('0') << setw(5) << i+1 << " ";
        cout << lst[i].name << " ";
        cout << lst[i].gender << " ";
        cout << lst[i].dob << " ";
        cout << lst[i].address << " ";
        cout << lst[i].taxid << " ";
        cout << lst[i].contractdate;
        if (i != N-1) cout << endl;
    }
}
int main(){
    struct Employee lst[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) input(lst[i]);
    printlist(lst,N);
    return 0;
}


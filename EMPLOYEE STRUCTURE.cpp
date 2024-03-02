#include <bits/stdc++.h>
using namespace std;
struct Employee {
	string name;
	string gt;
	string date;
	string add;
	string phone;
	string time;
};
void input(Employee &A){
	getline(cin,A.name);
	getline(cin, A.gt);
	getline(cin, A.date);
	getline(cin, A.add);
	getline(cin, A.phone);
	getline(cin, A.time);
	
}
void print(Employee &A){
	cout << "00001 ";
	cout << A.name << " " << A.gt << " " << A.date << " " <<A.add << " " << A.phone << " "<< A.time;
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}
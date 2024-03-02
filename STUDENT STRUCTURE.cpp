#include <bits/stdc++.h>
using namespace std;
struct Student {
	string name;
	string lop;
	string date;
	float a;
};
void input(Student &A){
	getline(cin,A.name);
	getline(cin, A.lop);
	getline(cin, A.date);
	size_t vt1 = A.date.find("/");
	size_t vt2 = A.date.find("/", vt1+1);
	string day = A.date.substr(0,vt1);
	string month = A.date.substr(vt1+1,vt2-vt1-1);
	string year = A.date.substr(vt2+1);
	if (day.size() == 1) day = "0" + day;
	if (month.size() == 1) month = "0" + month;
	A.date[0]= '/0';
	A.date = day + "/" + month + "/" + year;
	cin >> A.a;
	
}
void print(Student &A){
	cout << "B20DCCN001 ";
	cout << A.name << " " << A.lop << " " << A.date << " ";
	cout << fixed << setprecision(2) << A.a;
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}
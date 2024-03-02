#include <bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	string lop;
	string date;
	double gpa;
};
void input(Student &a){
	getline(cin, a.name);
	getline(cin, a.lop);
	getline(cin,a.date);
	cin >> a.gpa;
	size_t vt1 = a.date.find("/");
	size_t vt2 = a.date.find("/", vt1+1);
	string ngay = a.date.substr(0,vt1);
	string thang = a.date.substr(vt1+1,vt2-vt1-1);
	string nam= a.date.substr(vt2+1);
	if (ngay.size() == 1) ngay = '0' + ngay;
	if (thang.size() == 1) thang = '0' + thang;
	if (nam.size() == 1) nam = '0' + nam;
	string gep = ngay+ "/" + thang + "/" + nam;
	a.date = gep;
}
void print(Student a){
	cout << "B20DCCN001 " << a.name << " " << a.lop << " " << a.date << " "<< fixed << setprecision(2) << a.gpa << endl;
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}
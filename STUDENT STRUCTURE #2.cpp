#include <bits/stdc++.h>
using namespace std;
struct Student{
	string name;
	string lop;
	string date;
	float gp;
	
};
string to(string a){
	stringstream ss(a);
	string result,b;
	result = "";
	while (ss >> b){
		b[0] = toupper(b[0]);
		for (int i =1; i< b.size(); i++){
			b[i] = tolower(b[i]);
		}
		result = result + b + " ";
	}
	return result;
}
void input1(Student &a){
	cin.ignore();
	getline(cin, a.name);
	a.name = to(a.name);
	getline(cin, a.lop);
	getline(cin,a.date);
	size_t vt1 = a.date.find("/");
	size_t vt2 = a.date.find("/",vt1+1);
	string day = a.date.substr(0,vt1);
	string month = a.date.substr(vt1+1, vt2-vt1-1);
	string year = a.date.substr(vt2+1);
	if (day.size() == 1) day = '0' + day;
	if (month.size() == 1) month = '0' + month;
	a.date[0] = '/0';
	a.date = day + '/' + month + '/' + year;
	cin >> a.gp;
}
void input(Student a[],int n){
	for (int i =1; i<= n; i++){
		input1(a[i]);
	}
}
void print(Student a[], int n){
	for (int i =1; i<=n; i++){
		string l = to_string(i);
		if (l.size() < 3){
			for (int j =l.size(); j< 3; j++) l = '0'+l;
		}
		cout << "B20DCCN" << l << " ";
		cout << a[i].name;
		cout << a[i].lop << " ";
		cout << a[i].date << " ";
		cout << fixed << setprecision(2) << a[i].gp << endl;
	}
}
int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}
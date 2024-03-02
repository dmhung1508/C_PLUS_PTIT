#include <bits/stdc++.h>
using namespace std;
struct Examinee {
	string name;
	string date;
	double a;
	double b;
	double c;
};
void input(Examinee &A){
	getline(cin,A.name);
	getline(cin, A.date);
	cin >> A.a;
	cin >> A.b;
	cin >> A.c;
	
}
void print(Examinee &A){
	cout << A.name << " " << A.date << " ";
	cout << fixed << setprecision(1) << A.a + A.b + A.c;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}
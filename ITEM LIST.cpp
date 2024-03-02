#include <bits/stdc++.h>
using namespace std;
struct mh {
	int id;
	string name;
	string cate;
	float buy;
	float sell;
	float ck;
};
int main(){
	int t;
	cin >> t;
	cin.ignore();
	mh a[t+1];
	for (int i =1; i<=t; i++){
		a[i].id = i;
		getline(cin,a[i].name);
		getline(cin,a[i].cate);
		cin >> a[i].buy >> a[i].sell;
		a[i].ck = a[i].sell - a[i].buy;
		cin.ignore();
		cin.clear();
	}
	for (int i =1; i<t ;i++){
		for (int j =i+1; j<=t; j++){
			if (a[i].ck < a[j].ck){
				mh n;
				n = a[i];
				a[i] = a[j];
				a[j] = n;
			}
		}
	}
	for (int i =1; i<=t ;i++){
		cout << a[i].id << " " << a[i].name << " " << a[i].cate << " " << fixed << setprecision(2) <<a[i].ck << endl;
	}
}
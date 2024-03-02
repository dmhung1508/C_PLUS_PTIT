#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream infile("DATA.in");
	string line;
	long long sum = 0;
	while (getline(infile, line)){
		istringstream iss(line);
		string s;
		while (iss >> s){
			try{
				int a= stoi(s);
				sum+= a;
			} catch (const invalid_argument& e){
			} catch (const out_of_range& e){
			}
		}
	}
	cout << sum;
}
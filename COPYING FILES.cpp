#include <bits/stdc++.h>
using namespace std;
int main(){
	ifstream infile("PTIT.in");
	ofstream outfile("PTIT.out");
	outfile << infile.rdbuf();
	infile.close();
	outfile.close();
}
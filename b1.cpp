#include<bits/stdc++.h>
using namespace std;
struct tuong{
	string name;
	int loai,at,de,hi,to;
	int gia;
	double st;
};
class dstuong{
	public:
		vector <tuong> ds;
		int n,m;
		int tong;
		void inp(){
			cin >> n >> m;
			for (int i =0; i<n; i++){
				tuong a;
				cin >> a.loai >> a.at >> a.de;
				if (a.loai == 1){
					a.name = "Jarvan";
					a.hi = 1;
					a.gia = 1;
				}
				if (a.loai == 2){
					a.name = "Reksai";
					a.hi = 2;

					a.gia = 2;
				}
				if (a.loai == 3){
					a.name = "Sivir";
					a.hi = 0;
					a.gia = 3;
					
				}
				if (a.loai == 4){
					a.name = "Illaoi";
					a.hi = 3;
					a.gia = 4;
				}
				ds.push_back(a);
			}
		}
		void tinhat() {
        int he[4] = {0};
        int toc[5] = {0};
        int tcn[4] = {0}, ttc[4] = {0};
        for (int i = 0; i < ds.size(); i++) {
            toc[ds[i].loai]++;
            he[ds[i].hi]++;
            if (ds[i].loai == 1 || ds[i].loai == 3) {
                tcn[1] = tcn[3] = 1;
            }
            if (ds[i].loai == 2 || ds[i].loai == 4) {
                ttc[2] = ttc[4] = 1;
            }
        }
        int demhe = 0, demcn = 0, demtc = 0;
        he[4] = 0;
        for (int i = 1; i <= 4; i++) {
            cout << he[i] << endl;
            if (he[i] != 0) demhe++;
            if (tcn[i] != 0) demcn++;
            if (ttc[i] != 0) demtc++;
        }

        for (int i = 0; i < ds.size(); i++) {
            tuong& a = ds[i];
            if ((a.gia == 1 || a.gia == 3)) {
                if (demcn == 2) {
                    a.at += 15;
                    a.de += 15;
                }
            }
            if ((a.gia == 1 || a.gia == 4 || a.gia == 2)) {
                if (demhe == 3) {
                    a.de += 30;
                }
                if (demhe == 2) {
                    a.de += 15;
                    cout << a.de << endl;
                }
            }
            if ((a.gia == 2 || a.gia == 4)) {
                if (demtc == 2) {
                    a.at += 30;
                }
            }
        }
    }  
        void tinhlaist(){
            for (int i = 0; i< ds.size(); i++){
                tuong &a = ds[i];
                if (a.gia == 1) {
                    a.st = m*a.de * 2.0f;
                } else if (a.loai == 2) {
                    a.st = a.at * 1.0f;
                    int k = m / 4;
                    k = k*4 + (m-k);
                    a.st = k*a.st;
                } else if (a.loai == 3) {
                    a.st = m*a.at * 2.0f;
                } else if (a.loai == 4) {
                    a.st = m*(a.at + a.de) / 2.0f;
                }
            }
            
        }
		void outpt(){
            for (int i =0; i< ds.size(); i++){
                cout << ds[i].name << " " << ds[i].at << " " << ds[i].de << " " << ds[i].st << endl;
            }
        }
		
		
};
int main() {
    dstuong d;
    d.inp();
    d.tinhat();
    d.tinhlaist();
    d.outpt();
    return 0;
}
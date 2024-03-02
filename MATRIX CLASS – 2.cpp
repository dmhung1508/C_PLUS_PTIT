#include <bits/stdc++.h>
using namespace std;
class mt{
	public:
		int n,m,p;
		int a[50][50];
		int b[50][50];
		int c[50][50];
		void input(){
			cin >> n>>m>>p;
			for (int i =1; i<=n; i++){
				for (int j=1; j<=m; j++) cin >> a[i][j];
			}
			for (int i =1; i<=m; i++){
				for (int j=1; j<=p; j++) cin >> b[i][j];
			}
		}
		void output(){
			for (int i =1; i<=n; i++){
				
				for (int j = 1; j<=p; j++){
					int k =0;
					for (int l = 1; l <=m; l++){
						k += a[i][l] * b[l][j];
					}
					c[i][j]=k;
				}
			}
			for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= p; j++) {
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
		}
};
int main(){
	mt o;
	o.input();
	o.output();
}
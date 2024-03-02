#include <bits/stdc++.h>
using namespace std;
int n,m,k;
vector <int> a[100005];
bool visited[100005];
void inpu(){
    cin >> n >> m >> k;
    for (int i =0; i<= 100005; i++) a[i].clear();
    for (int i =1; i<=m; i++){
        int x,y;
        
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(visited,false,sizeof(visited)); 
}
void visit1(int u){
    cout << u << " ";
    visited[u] = true;
    for (int x:a[u]){
        if (visited[x] == false){
            visit1(x);
        }
    }
}
int main(){
    int t; 
    cin >> t;
    while (t--){
        inpu();
        visit1(k);
        cout << endl;
    }
    
}
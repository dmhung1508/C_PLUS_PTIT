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
void bfs(int u){
    queue <int>q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()){
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (int x:a[v]){
            if (visited[x] == false){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}
int main(){
    int t; 
    cin >> t;
    while (t--){
        inpu();
        bfs(k);
        cout << endl;
    }
    
}
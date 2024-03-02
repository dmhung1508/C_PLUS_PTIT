#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fin("DATA.in");
    map<int, int> m;
    int n;
    while(fin >> n) ++m[n];
    for(auto i : m) cout << i.first << ' ' << i.second << endl;
    return 0;
}
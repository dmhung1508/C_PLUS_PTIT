#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<int> v;
vector<string> vs;

void Save()
{
	string s = "";
	for(int i : v) s += to_string(i) + " ";
	vs.push_back(s);
}

void Try(int i)
{
	if(v.size() >= 2) Save();
	for(int j = i; j < n; j++)
	{
		if(v.empty() || v.back() < a[j]) 
		{
			v.push_back(a[j]);
			Try(j + 1);
			v.pop_back();
		}
		
	}
}
int main()
{
	freopen("SEQUENCE.in", "r", stdin);
    n= 100;
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
	Try(0);
	sort(vs.begin(), vs.end());
	for(string i : vs) cout << i << endl;
	return 0;
}

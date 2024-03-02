#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a; i < b; ++i)
bool ktTang(string &s)
{
    F(i, 1, s.length()) if(s[i] <= s[i - 1]) return 0;
    return 1;
}

bool kt68(string &s)
{
    F(i, 0, s.length()) if(s[i] != '6' && s[i] != '8') return 0;
    return 1;
}

bool ktBangNhau(string &s)
{
    F(i, 1, s.length()) if(s[i] != s[i - 1]) return 0;
    return 1;
}

bool ktDauCuoi(string &s)
{
    F(i, 1, 3) if(s[i] != s[i - 1]) return 0;
    if(s[s.length() - 1] != s[s.length() - 2]) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, a = "";
        cin >> s;
        F(i, 5, s.length()) if(isdigit(s[i])) a += s[i];
        if(kt68(a) || ktTang(a) || ktDauCuoi(a) || ktBangNhau(a)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
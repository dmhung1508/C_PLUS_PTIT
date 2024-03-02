#include <bits/stdc++.h>
using namespace std;

string check(string q){

    stack <char> a;
    for (auto c:q){
        if (c == ')'){
            bool k = true;
            while (a.top() != '('){
                if (a.top() == '+' || a.top() == '-' || a.top() == '*' || a.top() == '/'){
                    k = false;
                }
                
                a.pop();
            }
            if (k) return "Yes";
            a.pop();
        } else a.push(c);
    }
    return "No";
}

int main()
{
    int t = 1;
    cin >> t;
    string s;
    cin.ignore();
    while(t--)
    {
        getline(cin, s);
        cout << check(s) << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool check(string &s)
{
    for(int i = 1; i < s.length(); ++i) if (s[i] < s[i-1]) return 1;
    return 0;
}
bool check0(string &s)
{
    return s[0] != '0';
}
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		string s;
		cin >> s;
		int k =0;
		if (!check(s)){
			cout << -1 << endl;
			continue;
		}
		int index = s.length() - 1;
        for (int i =s.length()-1; i>=1; i--)
        {
            if(s[i - 1] > s[i])
            {
                index = i;
                break;
            }
        }
        int move = index;
        char maxx = s[index];
        for (int i= index + 1; i <= s.length()-1; i++)
        {
            if (s[i] > maxx && s[i] < s[index-1])
            {
                move = i;
                maxx = s[i];
            }
        }
        swap(s[index - 1], s[move]);
        if (!check0(s)) cout << -1 << endl;
        else cout << s << endl;
    }
    return 0;
}
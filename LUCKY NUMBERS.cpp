#include<bits/stdc++.h>

using namespace std;
int sum(int n)
{
int s=0;
while(n>0)
{
s+=n%10;
n/=10;
}
return s;
}
bool solve(string s)
{
int k=0,n=s.size();
for(int i=0;i<n;i++)
k+=(s[i]-'0');
while(k>9) k=sum(k);
return (k%9==0&&k!=0);
}
main()
{
int t;
cin>>t;
string s;
while(t--)
{
cin>>s;
cout<<solve(s)<<endl;
}
}

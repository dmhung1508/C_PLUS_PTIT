#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i=0; i<n; ++i)
            cin >> a[i];
        long long vt;
        long long cnt = 0;
        sort(a, a + n);
        for(int i = 0; i < n - 1; ++i)
        {
            vt = lower_bound(a + i + 1, a + n, k - a[i]) - a;
            cnt += n - vt;
        }
        cout << cnt << endl;
    }
    return 0;
}

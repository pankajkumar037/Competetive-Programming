#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long

void solve() {
        string str;
        cin >> str;
        int n = str.size();
        int mx = 0;
        int cnt = 0;
        int flg = 1;
        int s = 0;
        for(int i=0;i<n;i++)
        {
            if (str[i] == '1')
            {
                cnt++;
            }
            else
            {
                if (flg)
                {
                    flg = 0;
                    s = cnt;
                }
                mx = max(mx, cnt);
                cnt = 0;
            }
        }
        mx = max(mx, cnt);
        int e = cnt;
        mx = max(mx, s + e);
        if(flg)
        {
            cout<<n*n<<endl;
        }
        else 
        {
            int r = (mx - 1) / 2;
            int ans = (mx-r)*(r+1);
            cout<<ans<<endl;
        }
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
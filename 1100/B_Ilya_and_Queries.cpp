#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
   string s;
   cin>>s;
   int n=s.length();

    int dp[100005];
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]) dp[i]=dp[i-1]+1;
        else dp[i]=dp[i-1];
    }

    int m;
    cin>>m;
    while(m--){
        int a,b;
        cin>>a>>b;

        cout<<dp[b-1]-dp[a-1]<<endl;
    }

 
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
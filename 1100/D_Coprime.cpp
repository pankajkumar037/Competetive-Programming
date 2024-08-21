#include "bits/stdc++.h"
using namespace std;
 
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>helper(1001,0);
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        helper[temp]=i;
    }

    int ans=-1;
    for(int i=1;i<=1000;i++){
        for(int j=1;j<=1000;j++){
            if(helper[i] && helper[j] && __gcd(i,j)==1){
                ans=max(ans,helper[i]+helper[j]);
            }
        }
    }
    cout<<ans<<endl;



}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
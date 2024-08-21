#include "bits/stdc++.h"
using namespace std;
 
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

 
    vector<int>psum(n+1);
    for(int i=1;i<=n;i++){
       psum[i]=psum[i-1]+arr[i-1];
    }
    // for(int i=1;i<=n;i++){
    //    cout<<psum[i]<<" ";
    // }
    // cout<<endl;

    int ans=INT_MIN;
    for(int i=1;i<n;i++){
        ans=max(ans,__gcd(psum[i],psum[n]-psum[i]));
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
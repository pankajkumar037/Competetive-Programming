#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    vector<int>psum(n+1);
    for(int i=1;i<=n;i++){
        psum[i]=psum[i-1]+arr[i-1];
    }

    int maxi=INT_MIN;
    for(int i=0;i<=k;i++){
        maxi=max(maxi,psum[n-i]-psum[2*(k-i)]);
    }


    cout<<maxi<<endl;

    
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
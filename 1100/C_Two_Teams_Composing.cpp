#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int>arr(n+1);
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        arr[t]++;
    }

    
    int mx = *max_element(arr.begin(), arr.end());
    int diff = n + 1 - count(arr.begin(), arr.end(), 0);

    cout<<max(min(mx-1,diff),min(diff-1,mx))<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
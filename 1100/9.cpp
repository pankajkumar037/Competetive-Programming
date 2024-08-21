#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long
 
void solve() {

        int n, c; cin >> n >> c;
        vector<int> arr(n);
        for(int i = 0; i < n; ++i) cin >> arr[i];

        int lo=1;
        int hi=1e9;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int s=0;
            for(int i=0;i<n;i++){
                s += (arr[i]+2*mid)*(arr[i]+2*mid);
                if(s>c) break;
            }

            
            if(s==c){
                cout<<mid<<endl;
                return;
            }
            if(s>c) hi=mid-1;
            else lo=mid+1;
            
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
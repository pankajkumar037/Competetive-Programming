#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   
    unsigned int allOnes1 = ~0;
    for(int i=0;i<n;i++){
        if(i!=arr[i])allOnes1&=arr[i];
    }
    cout<<allOnes1<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
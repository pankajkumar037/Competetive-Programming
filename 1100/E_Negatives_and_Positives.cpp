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

 
   
    int ans=0;
    int nog=0;
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        ans+=abs(arr[i]);
        if(arr[i]<0) nog++;
        mini=min(mini,abs(arr[i]));
    }

    if(nog%2==0) cout<<ans<<endl;
    else{
        ans-=(2*mini);
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
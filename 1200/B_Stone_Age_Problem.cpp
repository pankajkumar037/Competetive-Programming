#include "bits/stdc++.h"
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    int n,q;
    cin>>n>>q;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    while(q--){
        int t;
        cin>>t;
        if(t==1){
            int a,b;
            cin>>a>>b;
            arr[a-1]=b;
        }
        else{
            int x;
            cin>>x;
            for(int i=0;i<n;i++){
                arr[i]=x;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=arr[i];
        }
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
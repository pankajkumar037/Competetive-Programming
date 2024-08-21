#include "bits/stdc++.h"
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
int isvalid(int )

 
void solve() {
    string s;
    cin>>s;

    
    int res=INT_MAX;
    int l=3;
    int r=s.size();
    while(l<=r){
        int mid=(l+r)/2;
        if(isvalid(mid)){
            res=min(res,mid);
            r=mid-1;
        }
        else l=mid+1;
    }
    if(res==INT_MAX) cout<<"0"<<endl;
    else cout<<"res"<<endl;
    
     
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
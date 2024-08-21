#include "bits/stdc++.h"
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
int solve() {
    int n,s;
    cin>>n>>s;

    vector<int>arr(n+1),pre(n+1,0);
    for(int i=1;i<n+1;i++){
        cin>>arr[i];
    }

    
    for(int i=1;i<n+1;i++){
        pre[i]=pre[i-1]+arr[i];
    }
  
    
    int ans=INT_MAX;
    
    if(pre[n]<s) return -1;
    else{
        for(int i=1;i<n+1;i++){
            int curr=pre[i-1]+s;
            if(pre[n]<curr) continue;
            else{
                auto it=upper_bound(pre.begin(),pre.end(),curr);
                it--;
                int dist=(it-pre.begin());
                ans=min(ans,n-(dist-i+1));
            }
        }
    }
    return ans;
    
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       cout<< solve()<<endl;
    }
}
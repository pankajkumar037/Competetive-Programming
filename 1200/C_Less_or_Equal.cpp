#include "bits/stdc++.h"
using namespace std;
 
const int mod=1e9+7;
#define int long long
 

 
void solve() {

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

	sort(arr.begin(),arr.end());
    int ans;
    if(k==0) cout<<arr[0]-1<<endl;
    else ans=arr[k-1];

    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=ans) cnt++;
    }

    if(k!=cnt && (!(1<=ans && ans<= 1000*1000*1000))){
       cout<<"-1"<<endl;
       return ;
    }
    cout<<ans<<endl;
    
     
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
       solve();
    }
}
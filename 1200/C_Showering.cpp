#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    int n,s,m;
    cin>>n>>s>>m;

    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        arr.push_back({x,y});
    }

    sort(arr.begin(),arr.end());

    int ans=abs(0-arr[0].first);

    for(int i=1;i<n;i++){
        ans=max(ans,abs(arr[i-1].second-arr[i].first));
    }

    ans=max(ans,abs(arr[arr.size()-1].second-m));

    if(ans>=s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
#define int long long



void solve() {
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x-i]++;
    }

    int ans=0;
    for(auto it:mp){
        int m=it.second;
        ans+=((m)*(m-1)/2);
    }
   
    cout<<ans<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}








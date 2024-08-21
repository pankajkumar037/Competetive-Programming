#include <bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<pair<int,int>,int>mp;
    int ans=0;
    for(int i=0;i<n;i++){
        int val1=arr[i]%x;
        int val2=arr[i]%y;
        
        ans+=mp[{(x-(arr[i]%x))%x,arr[i]%y}];
        mp[{arr[i]%x,arr[i]%y}]++;
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

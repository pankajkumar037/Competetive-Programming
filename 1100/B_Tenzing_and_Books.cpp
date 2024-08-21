#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    vector<int>p(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    sort(arr.rbegin(),arr.rend());

    int i=0;
    int j=0;
    while(k--){

        int ans1=p[i]+p[i+1];
        int ans2=arr[j];

        if(ans1>ans2) i=i+2;
        else j+1;
    }

    int y=i;
    int z=n-j-1;
    int sum=0;
    for(int l=y;l<=z;l++){
        sum+=p[l];
    }
    cout<<sum<<endl;

    
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
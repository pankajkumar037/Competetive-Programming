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

    int i=1;
    int j=i+k-1;
    int sum=0;
    for(int y=0;y<=2;y++){
        sum+=arr[y];
    }
    int ans=sum;
    int idx=0;
    while(j<n){
        sum=sum-arr[i-1]+arr[j];
        if(sum<ans){
            ans=sum;
            idx=i;
        }
        i++;
        j++;
    }

    cout<<idx+1<<endl;


}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
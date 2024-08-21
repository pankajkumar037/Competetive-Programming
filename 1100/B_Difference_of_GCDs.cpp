#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
    int n,l,r;
    cin>>n>>l>>r;

    bool flag=true;

    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        a[i]=((l-1)/i+1)*i;
        if(a[i]>r){
            flag=false;
            break;
        }
    }

    if(flag==false) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
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
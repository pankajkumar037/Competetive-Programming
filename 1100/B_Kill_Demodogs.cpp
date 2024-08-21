#include "bits/stdc++.h"
using namespace std;

const int n1=1e9+7;
#define int long long

void solve() {
    int n;
    cin>>n;
    
    if(n==2){
        cout<<(7*2022)%1000000007<<endl;
    }
    if(n>2){
        int ans=((((n*(n+1))%n1)*(4*n-1))%n1*337)%n1;;
        cout<<(ans)<<endl;
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
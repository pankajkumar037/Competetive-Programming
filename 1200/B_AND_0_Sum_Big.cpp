#include <bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007

void solve() {
    int n,k;
    cin>>n>>k;

    int i=1;
    int y=n;
    while(i<k){
        n=((n%m*(y%m)))%m;
        i++;
    }

    cout<<n<<endl;


   
}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}

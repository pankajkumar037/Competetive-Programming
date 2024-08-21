#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
#define int long long



void solve() {
   int n,k;
   cin>>n>>k;

   int x=n-1;

   int mult=(k/x)*n;
   int m=k%x;

   if(m==0) cout<<mult-1<<endl;
   else cout<<mult+m<<endl;


}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}








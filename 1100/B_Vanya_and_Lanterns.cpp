#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
#define int long long



void solve() {
   int n,l;
   cin>>n>>l;

   vector<long double>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }

   sort(arr.begin(),arr.end());

    long double ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,(arr[i]-arr[i-1]));
    }

    long double a=(ans/2);
    long double x=max(arr[0]-0.0,l-arr[n-1]);

    if(a>x) cout<<setprecision(10)<<a<<endl;
    else cout<<setprecision(10)<<x<<endl;


}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}








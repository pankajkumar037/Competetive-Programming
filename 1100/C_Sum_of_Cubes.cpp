#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

bool isPerfectCube(int n) {
    if (n <= 0) {
        return false;
    }

    int root = round(cbrt(n)); 
    return root * root * root == n;
}   

void solve() {
    int n;
    cin>>n;

   bool flag=false;
   for(int i=1;i*i*i<=n;i++){
        int x=(i*i*i);
        if((n-x)<0) break;
        if(isPerfectCube(n-x)){
            flag=true;
            break;
        }
   }
   
   if(flag==true) cout<<"YES"<<endl;
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








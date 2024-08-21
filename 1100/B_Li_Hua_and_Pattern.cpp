#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long

void solve() {
        int n,k;
        cin>>n>>k;
        vector<vector<inr>>arr(n+1,vector)
        for(int i=1;i<=n;i++){
            for(int j=0;j<=n;j++){
                cin>>arr[i][j];
            }
        }

        int count=0;

         for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                if(arr[i][j]!=arr[n-i+1][n-j+1]) count++;
            }
        }

        count/=2;
        if((count)>k){
            cout<<"no"<<endl;
            return;
        }
        k-=count;
        if(n%2==1) cout<<"yes"<<endl;
        else if(k%2==1) cout<<"no"<<endl;
        else cout<<"yes"<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
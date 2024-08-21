#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int>a(n),b(n-1),c(n-2);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        cin>>b[i];
    }
    for(int i=0;i<n-2;i++){
        cin>>c[i];
    }

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());

    int a1=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            a1=a[i];
            break;
        }
    }
    if(a1==-1) a1=a[n-1];

    
    int a2=-1;
    for(int i=0;i<n-2;i++){
        if(b[i]!=c[i]){
            a2=b[i];
            break;
        }
    }
    if(a2==-1) a2=b[n-2];

    cout<<a1<<endl;
    cout<<a2<<endl;
 
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
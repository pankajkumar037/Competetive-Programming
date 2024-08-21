#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int z=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0') z++;
    }

    if(z%2!=0){
        if(z==1) cout<<"BOB"<<endl;
        else cout<<"ALICE"<<endl;
    }
    else{
        cout<<"BOB"<<endl;
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

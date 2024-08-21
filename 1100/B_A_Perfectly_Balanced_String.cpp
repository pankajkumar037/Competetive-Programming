#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define int long long

void solve() {
    string s;
    cin>>s;
    int n=s.length();

    unordered_set<char>st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }

    bool flag=true;
    for(int i=0;i<n;i++){
            if(i+st.size()<n){
                if(s[i]!=s[i+st.size()]){
                flag=false;
                break;
                }
            } 
    }

    if(flag==false) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
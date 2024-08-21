#include<bits/stdc++.h>
#include<string>
#include<algorithm>>
using namespace std;
 
const int mod=1e9+7;
//#define int long long
 
 
void solve() {
    int n;
    cin >> n;
    
    string s=to_string(n);
    if(s.length()<=2){
        cout<<"NO"<<endl;
        return;
    }

    if(s[0]=='1' && s[1]=='0'){
        if(s.length()==3){
            if(n%10>=2) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }

        int x=n;
        if(s.length()>=4){
            if(s[2]=='0'){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
            
        }
    }
    else{
       cout<<"NO"<<endl;
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
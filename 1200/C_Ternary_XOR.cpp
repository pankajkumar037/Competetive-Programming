#include<bits/stdc++.h>
#include<string>
#include<algorithm>>
using namespace std;
 
const int mod=1e9+7;
//#define int long long
 
 
void solve() {
    int n;
    cin >> n;

    string k;
    cin>>k;

    bool flag = true;
    string a = "1", b = "1";

    for (int i = 1; i < n; i++) {
        if (k[i] == '2') {
            a += '1';
            b += '1';
        } else if (k[i] == '0') {
            a += '0';
            b += '0';
        } else {
            a += '1';
            b += '0';
    
            for (int j = i + 1; j < n; j++) {
                a += '0';
                b += k[j];
            }
            break;
    
        }
    }

  
    cout<<a<<endl<<b<<endl;
    
     
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
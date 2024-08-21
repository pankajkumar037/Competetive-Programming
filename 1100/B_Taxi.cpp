#include "bits/stdc++.h"
using namespace std;

const int mod=1e9+7;
#define ll long long

void solve() {
   ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0, d = 0, cnt = 0;
    for(int i = 0; i < n; ++i) {
        ll t;
        cin >> t;
        if(t == 1) {
            a++;
        }else if(t == 2) {
            b++;
        }else if(t == 3) {
            c++;
        }else{
            d++;
        }
    }
    cnt += d;
    
    if(c < a) {
        cnt += c;
        a = a - c;
        c = 0;
    }else if(a <= c) {
        cnt += a;
        c = c- a;
        a = 0;
    }
    if(c > 0) {
        cnt += c;
        c = 0;
    }
    if(b > 0) {
        cnt += b/2;
        b = b%2;
    }
    
    ll left = a + (b * 2);
    if(left <= 4 && left > 0) {
        cnt +=1;
    }else if(left%4 != 0) {
        cnt += (left / 4) + 1;
    }
    cout << cnt << endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}
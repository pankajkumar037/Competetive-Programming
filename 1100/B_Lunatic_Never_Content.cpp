#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long

void solve() {
     int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a) cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
    }
    cout << ans << '\n';
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
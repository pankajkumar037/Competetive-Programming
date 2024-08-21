#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,k,x;
    cin >> n>>k>>x;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
  
    sort(a.begin(), a.end());

    vector<int> gaps;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            gaps.push_back(a[i] - a[i - 1]);
        }
    }

    sort(gaps.begin(), gaps.end());

    int groups = gaps.size() + 1; 


    for (int gap : gaps) {
        int required = (gap - 1) / x;
        if (k >= required) {
            k -= required;
            groups--; 
        } else {
            break;
        }
    }

    cout << groups << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
       solve();
    }
}

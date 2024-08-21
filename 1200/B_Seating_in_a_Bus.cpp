#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> occupied;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    occupied.insert(arr[0]);
    
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        if (occupied.count(x- 1) == 0 && occupied.count(x+ 1) == 0) {
            cout << "NO" << endl;
            return;
        }
        occupied.insert(x);
    }
    
    cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

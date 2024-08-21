#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

  
   int ans = 0;

    // Traverse through each element to find pairs
    for (int i = 1; i <= n; i++) {
        int ai = arr[i-1];
        for (int j = ai - (i % ai); j <= 2 * n; j += ai) {
            int k = j / ai; // Calculate the possible value of k
            if (k > i && k <= n && i + k == ai * arr[k-1]) {
                ans++;
            }
        }
    }

    cout << ans << endl;

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

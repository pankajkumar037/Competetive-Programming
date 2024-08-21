#include "bits/stdc++.h"
using namespace std;
 
const int mod=1e9+7;
#define int long long
 

 
void solve() {
    auto sgn = [&](int x) {
        if (x > 0) return 1;
        else return -1;
    };


    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

		int ans = 0;
		for (int i = 0; i < n; ++i) {
			int cur = arr[i];
			int j = i;
			while (j < n && sgn(arr[i]) == sgn(arr[j])) {
				cur = max(cur, arr[j]);
				j++;
			}
			ans+= cur;
			i = j - 1;
		}
		cout << ans << endl;
   
    
    
    
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
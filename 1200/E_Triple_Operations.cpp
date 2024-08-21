#include <bits/stdc++.h>
using namespace std;

#define int long long
vector<int> prethree;


void solve() {
    int l, r;
    cin >> l >> r;
   
    int ans = 0;
    int a=l;
    while (a>0) {
        a /= 3;
        ans++;
    }
    ans*=2;
 
    ans+=(prethree[r]-prethree[l]);
    
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    prethree.resize(200001, 0);
    for (int i = 1; i <= 200000; i++) {
        int count=0;
        int val=i;
        while(val!=0){
            val/=3;
            count++;
        }

        prethree[i]=count;
    }
    for (int i = 1; i <= 200000; i++) {
        prethree[i]+=prethree[i-1];
    }



    
    while (t--) {
        solve();
    }

    return 0;
}

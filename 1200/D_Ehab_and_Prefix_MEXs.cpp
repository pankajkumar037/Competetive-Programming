#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 


void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }

    vector<bool>visited(n,0);
    vector<int>ans(n,-1);

    for (int i=0;i<n;i++) {
        visited[arr[i]]=true;
        if (i>0 && arr[i-1]!=arr[i]) {
            ans[i]=arr[i-1];
        }
    }
    for (int i=1;i<n;i++) {
        if (arr[i-1]!=arr[i]) {
            ans[i]=arr[i-1];
        }
    }

    int c= 0;
    for (int i=0;i<n;i++) {
        if (ans[i]==-1) {
            while(visited[c]) {
                c++;
            }
            ans[i]=c;
            visited[c]=true;
        }
    }

    for (int i=0;i<n;i++) {
        cout<<ans[i]<<" ";
    }
}


 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
   // cin >> t;
    while(t--) {
       solve();
    }
}
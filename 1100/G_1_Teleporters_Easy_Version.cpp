#include "bits/stdc++.h"
using namespace std;
 
#define int long long

void solve() {
    int n,c;
    cin>>n>>c;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>helper;
    for(int i=0;i<n;i++){
        helper.push_back(arr[i]+(i+1));
    }

    sort(helper.begin(),helper.end());

    int ans=0;
    for(int i=0;i<n;i++){
        if(c>=helper[i]){
            ans+=1;
            c-=helper[i];
        }
        else{
            break;
        }
    }

    cout<<ans<<endl;
    return;


        

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
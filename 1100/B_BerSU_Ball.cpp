#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
#define int long long



void solve() {
   int n;
   
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int m;
    cin>>m;
    vector<int>brr(m);
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    sort(brr.begin(),brr.end());

    int ans=0;
    int lst=0;
    for(int i=0;i<n;i++){
        int k=lst;
        for(int j=k;j<m;j++){
            if(abs(arr[i]-brr[j])<=1 ){
                ans++;
                lst=j+1;
                break;
            }
        }
    }

    cout<<ans<<endl;

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}








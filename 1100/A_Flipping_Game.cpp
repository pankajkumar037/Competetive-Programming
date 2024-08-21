#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;
#define int long long



void solve() {
    int n;
    cin>>n;
    vector<int>arr(n),psum(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        psum[i]=arr[i]+arr[i-1];
    }


    int k=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            int c=1;
            for(int j=i+1;j<n;j++){
                if(arr[j]==0) c++;
                else{
                    if(c>ans){
                        ans=c;
                        k=j;
                    }
                    break;
                }
            }
        }
    }

    
   

}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) {
        solve();
    }
}








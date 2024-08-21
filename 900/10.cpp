#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n,q;
        cin>>n>>q;

        vector<long long int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

        vector<long long int>psum(n+1);
        for(int i=1;i<=n;i++){
            psum[i]=psum[i-1]+arr[i];
        }
        
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;

            long long int sum= psum[l-1]+psum[n]-psum[r]+(r-l+1)*k;

           if(sum%2 != 0) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }
    }
}
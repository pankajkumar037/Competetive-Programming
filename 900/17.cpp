#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        unordered_map<int,int>mp;
        int maxf=INT_MIN;;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        for(auto it:mp){
            maxf=max(maxf,it.second);
        }

      
       if(maxf==n) cout<<"0"<<endl;
       else{
            
            int ans=0;
           
            while(maxf<n){
              ans+=min(maxf,n-maxf)+1;
              maxf=maxf*2;

            }
            cout<<ans<<endl;
       }
        
    }
}

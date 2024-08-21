#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int ans=INT_MAX;
        int count=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]%2==0) count++;
            if(arr[i]%k==0) ans=0;
            else{
                ans=min(ans,k-arr[i]%k);
            }
        }
        if(k==4){
            ans=min(ans,(2-min(2,count)));
        } 
       
       cout<<ans<<endl;

       

    }
}
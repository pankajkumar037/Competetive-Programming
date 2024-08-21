#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,q;
        cin>>n>>k>>q;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        vector<int>maxc;
        int i=0;
       int count=0;
        while(i<n){
            if(arr[i]<=q){
                count=1;
                int j=i+1;
                while(arr[j]<=q && j<n){
                    count++;
                    j++;
                }
                maxc.push_back(count);
                i=j+1;
            }
            else{
                i++;
            }
        }

        int ans=0;
       if(maxc.size()>=1) {
        
        for(int i=0;i<maxc.size();i++){
            
            if(maxc[i]>=k) ans+=((maxc[i]*(maxc[i]+1))/2);
            
        }

       }
       
       cout<<ans<<endl;
        
    }
}
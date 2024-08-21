#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>prr(n);
        for(int i=0;i<n;i++){
            cin>>prr[i];
        }

        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
           v.push_back({min(prr[i],p),arr[i]});
        }

        sort(v.begin(),v.end());


        long long int ans=p;
        int count=n-1;
        if(count==0) cout<<ans<<endl;
        else{
            for(auto it:v){
            pair<long long int,long long int>pq;
            pq=it;
            if(count>=pq.second){
                count=count-pq.second;
                ans+=pq.second*pq.first;
                if(count==0) break;
            }
            else{
                ans += (count) * pq.first;
                break;
            }
            
           }
           cout<<ans<<endl;
        }
      
    }
}
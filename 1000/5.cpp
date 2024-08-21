#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            arr[i]=arr[i]%k;

        }

       vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            if(arr[i]==0) cout<<i<<" ";
            else{
                v.push_back({arr[i],n-i+1});
            }
        }
       


        sort(v.rbegin(),v.rend());

        for(int i=0;i<v.size();i++){
            pair<int,int>pq;
            pq=v[i];
            cout<<n+1-pq.second<<" ";
        }
        cout<<endl;

      
    }
}
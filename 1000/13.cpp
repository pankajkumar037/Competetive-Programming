#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

       vector<pair<int,int>>v;

       for(int i=0;i<n;i++){
         v.push_back({arr[i]-x,arr[i]+x});
       }


       int ans=0;
        int l=v[0].first;
        int r=v[0].second;
       for(int i=1;i<n;i++){
            if(v[i].first>r && v[i].first>r || v[i].second<l && v[i].first<l){
                 ans++;
                l=v[i].first;
                r=v[i].second;
                
            }
            else{
               l=max(l,v[i].first);
               r=min(r,v[i].second);
            }
       }
       cout<<ans<<endl;
    }
}
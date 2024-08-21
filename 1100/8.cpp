#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k,a,b;
        cin>>n>>k>>a>>b;

        vector<pair<long long,long long>>v;
        for(long long i=0;i<n;i++){
           long long x,y;
           cin>>x>>y;
           v.push_back({x,y});
        }
        if(b<a) swap(a,b);

        
        
        if(k>=a && k>=b) cout<<"0"<<endl;
        else{
           

            long long dist=abs(v[a-1].first-v[b-1].first)+abs(v[a-1].second-v[b-1].second);
            long long dist1=LLONG_MAX;
            long long dist2=LLONG_MAX;

            for(long long i=0;i<k;i++){
                dist1=min(dist1,abs(v[a-1].first-v[i].first)+abs(v[a-1].second-v[i].second));
                dist2=min(dist2,abs(v[b-1].first-v[i].first)+abs(v[b-1].second-v[i].second));
                dist=min(dist,dist1+dist2);
            }

             cout<<dist<<endl;
        }
       
    
        

    }
}
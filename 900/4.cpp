#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
       long long int a,b,n;
       cin>>a>>b>>n;
       vector<long long int>v(n);
       for(int i=0;i<n;i++){
            cin>>v[i];
       }

      
        long long int ans=b-1;
        b=1;
        for(int i=0;i<n;i++){
            b=min(a,v[i]+1);
            ans+=b-1;
            b=1;
        }
        
        

        cout<<ans+1<<endl;
      
    }
}
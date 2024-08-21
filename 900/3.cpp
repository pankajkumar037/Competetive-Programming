#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k,x;
       cin>>n>>k>>x;


       int mins=(k*(k+1))/2;
       
       int maxs=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        
       if( x<=maxs && x>=mins ) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
      

    }
}
#include<bits/stdc++.h>
using namespace std;
int prex[300002];
int main(){
   for(int i=1;i<=300000;i++){
        prex[i]=(prex[i-1]^i);
   }
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        int ans=prex[a-1];
     
    
     
      if(ans==b) cout<<a<<endl;
      else{
        int r=ans^b;
        if(r==a) cout<<a+2<<endl;
        else cout<<a+1<<endl;
      }

      
    }
}
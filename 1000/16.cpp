#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,r,b;
       cin>>n>>r>>b;

        int x=r/(b+1);
        int y=r%(b+1);
       
       int filled=(b+1)-y;

       string s="";
       for(int i=1;i<=filled;i++){
          for(int j=1;j<=x;j++){
            s+='R';
          }
          s+='B';
       }
       for(int i=1;i<=y;i++){
        for(int j=1;j<=x+1;j++){
            s+='R';
          }
           s+='B';
       }

       s.pop_back();
       cout<<s<<endl;


 
    }
}
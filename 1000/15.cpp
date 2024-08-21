#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;

       string s;
       cin>>s;
       

       int i=1;
       int j=k;
       int nw=0;
       int nb=0;
       for(int m=0;m<k;m++){
            if(s[m]=='W') nw++;
            else nb++;
        }
        int ans=nw;
       while(j<n){
        if( s[j]=='W') nw++;
        if(s[j]=='B') nb++;
        if(s[i-1]=='W') nw--;
        if(s[i-1]=='B') nb--;
        ans=min(ans,nw);

        i++;
        j++;
       }
       cout<<ans<<endl;
 
    }
}
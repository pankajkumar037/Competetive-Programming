#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    string s;
    cin>>s;

    int n=s.length();
    int na=0,nb=0,nc=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') na++;
        else if(s[i]=='B') nb++;
        else nc++;
    }

    if(na==nb){
        if(nc%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(na>nb){
            int x=na-nb;
            if(nc>=x){
                nc-=x;
                if(nc%2==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
            else cout<<"NO"<<endl;
        }
        else{
            int y=nb-na;
             if(nc>=y){
                nc-=y;
                if(nc%2==0) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;

            }
            else cout<<"NO"<<endl;

        }
    }


    
     
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
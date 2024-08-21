#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
int f(int x,int y){
    if(x>y) return 1;
    if(x==y) return 0;
    if(x<y) return -1;
}
 
void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

   int ans=0;
 //  cout<<a<<b<<c<<d<<endl; cout<<ans<<endl;

    if((f(a,c)+f(b,d))>0) ans+=1;
    if((f(a,d)+f(b,c))>0) ans++;
    if((f(b,c)+f(a,d))>0) ans++;
    if((f(b,d)+f(a,c))>0) ans++;



    cout<<ans<<endl;
    
   
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
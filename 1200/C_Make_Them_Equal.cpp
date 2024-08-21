#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    int n;
    char k;
    cin >> n>>k;
    string s;
    cin>>s;


   bool flag=false;

   for(int i=0;i<n;i++){
      if(s[i]!=k){
        flag=true;
        break;
      }
   }
   if(flag==false){
      cout<<"0"<<endl;
   }
   else{
        for(int i=n/2;i<n;i++){
            if(s[i]==k){
                cout<<"1"<<endl<<i+1<<endl;
                return;
            }
        }

        cout<<"2"<<endl;
        cout<<n-1<<" "<<n<<endl;
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
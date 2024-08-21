#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 


void solve() {
    string s;
    cin>>s;
    
    int c=0;
    int prev=s[0];
    for(int i=1;i<s.length();i++){
        int curr=s[i];
        if(curr!=prev){
            prev=curr;
        }
        else{
            c++;
        }
    }

    cout<<c<<" ";
    int fact=1;
    for(int i=1;i<=c+1;i++){
        fact*=i;
    }
    cout<<fact<<endl;

   
}


 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
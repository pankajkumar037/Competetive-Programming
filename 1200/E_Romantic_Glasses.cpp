#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 


void solve() {
    int n;
    cin>>n;
    
    map<int,int>mp;
    int sum=0;
    bool flag=false;
    mp[0]=1;
    vector<int>arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];
        if(i%2!=0) arr[i]=-1*arr[i];
        sum=sum+arr[i];
       
        mp[sum]++;

        if(mp[sum]>=2){
            flag=true;
        }
    }


    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
#define int long long
 
void solve() {
    int n;
    cin>>n;
    vector<int>arr(n),brr(n);
    
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       cin>>brr[i];
    }

    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());
    vector<int>ans;

    for(int value:brr){
        auto it=upper_bound(arr.begin(),arr.end(),value);
        int count=arr.end()-it;
        ans.push_back(count);

    }
   

    int c=0;
    for(int i=ans.size()-1;i>=0;i--){
       ans[i]=ans[i]-c;
       c++;
    }
  

    int a=1;
    for(int i=0;i<ans.size();i++){
        a=((a%(1000000007))*(ans[i]%(1000000007)))%(1000000007);
    }
    cout<<a<<endl;
      
}

        

int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}
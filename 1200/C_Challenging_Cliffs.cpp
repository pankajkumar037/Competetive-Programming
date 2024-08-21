#include<bits/stdc++.h>
#include<string>
#include<algorithm>>
using namespace std;
 
const int mod=1e9+7;
//#define int long long
 
 
void solve() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());

    int a=-1,b=-1;
    int diff=INT_MAX;
    for(int i=0;i<n-1;i++){
        if(abs(arr[i]-arr[i+1])<=diff){
            a=i;b=i+1;
            diff=abs(arr[i]-arr[i+1]);
        }
    }

    cout<<arr[a]<<" ";
    for(int i=b+1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<arr[b];
    cout<<endl;


   
    
     
}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
       solve();
    }
}
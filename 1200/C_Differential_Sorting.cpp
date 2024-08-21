#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  
    if(arr[n-2]>arr[n-1]){
        cout<<"-1"<<endl;
        return;
    }

    if(arr[n-1]>=0){
        cout<<n-2<<endl;
        for(int i=0;i<n-2;i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<endl;
        }

    }
    else{
        if(is_sorted(arr.begin(),arr.end())){
            cout<<"0"<<endl;
        }
        else{
            cout<<"-1"<<endl;
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
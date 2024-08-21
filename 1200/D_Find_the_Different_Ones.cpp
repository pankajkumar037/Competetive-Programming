#include <bits/stdc++.h>
using namespace std;
#define int long long
#define m 1000000007

void solve() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    

    vector<int>helpr(n);
    helpr[n-1]=n;
    for(int i=n-2;i>=0;i--){
        if(arr[i]==arr[i+1]){
            helpr[i]=helpr[i+1];
        }
        else{
            helpr[i]=i+1;
        }
    }

    int q;
    cin>>q;

    
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;

        if(helpr[l]<=r){
            cout<<l+1<<" "<<helpr[l]+1<<endl;
        }
        else{
             cout<<-1<<" "<<-1<<endl;
        }

    }
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

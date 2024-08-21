#include<bits/stdc++.h>
using namespace std;
 
const int mod=1e9+7;
#define int long long
 
 
void solve() {
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>ans(n,-1);
    vector<int>visited(n+1,false);
    for(int i=0;i<n;i++){
        visited[arr[i]]=true;
    }

    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            ans[i]=arr[i-1];
        }
    }

    int c=0;
    for(int i=0;i<n;i++){
        if(ans[c]==-1 && visited[i]==false){
            ans[c]=i;
        }
        else if(ans[c]!=-1 && visited[i]==false){
            c++;
            ans[c]=i;

        }
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";

    }
    cout<<endl;

}
 
 
        
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
   // cin >> t;
    while(t--) {
       solve();
    }
}
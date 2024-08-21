#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            v[i]=y;
        }
        int ans;

        if(n==0) ans=2*x;
        else{
            ans=v[0]-0;
            for(int i=1;i<n;i++){
                ans=max(ans,v[i]-v[i-1]);

            }
            ans=max(ans,2*(x-v[n-1]));
            

        }
        cout<<ans<<endl;

        
    }
}
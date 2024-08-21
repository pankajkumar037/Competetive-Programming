#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        vector<long long int>arr(n+1,0);
        
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
       

        int ans=0;
        
        for(long long int i=1;i<=n;i++){
           if(arr[i-1]==0 && arr[i]!=0) ans++;
        }

        cout<<min(ans,2)<<endl;;
        
       
    }
}
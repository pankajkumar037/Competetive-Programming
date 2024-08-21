#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            arr[i]=x;
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%(n-1)==0) cout<<"Yes";
        else cout<<"No";

    }
}
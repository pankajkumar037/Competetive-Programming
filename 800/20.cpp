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
            int y;
            cin>>y;
            arr[i]=y;
        }
        
        int minm=INT_MAX;
        int maxm=INT_MIN;
        for(int i=0;i<n;i++){
            minm=min(arr[i],minm);
            maxm=max(arr[i],maxm);
        }
        
        if(minm==maxm) cout<<"1"<<endl;
        else{
            for(int i=0;i<n;i++){
                cout<<(minm+maxm)-arr[i]<<" ";
            }
            cout<<endl;
        }
         
    }
}
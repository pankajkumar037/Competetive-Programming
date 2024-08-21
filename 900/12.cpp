#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int>arr(n);
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        
        if(n==1) cout<<"0"<<endl;
        else {
            long long int maxm=INT_MIN;
            int maxidx=-1;
            long long int minm=INT_MAX;
            int minidx=-1;
            for(int i=0;i<n;i++){
               if(arr[i]>=maxm){
                maxm=arr[i];
                maxidx=i;
               }
               if(arr[i]<=minm){
                minm=arr[i];
                minidx=i;
               }
            }
             
            if( maxidx==n-1 || minidx==maxidx+1|| minidx == 0){
                cout<<maxm-minm<<endl;
            }
            else{
                cout<<maxm-arr[0]<<endl;
            }
        }
    

    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int lo=0;
        int hi=1e10;

        while(lo<hi-1){
            long long mid=lo+(hi-lo)/2;
            
            long long twater=0;
            for(int i=0;i<n;i++){
                if(arr[i]<mid){
                    twater+=(mid-arr[i]);
                }
            }
            if(twater>x){
                
                 hi=mid+1;
            }
            else{
                lo=mid-1;
            }
            
        }

        cout<<lo<<endl;


    }
}
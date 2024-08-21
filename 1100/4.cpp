#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        bool flag=false;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0) flag=true;
        }

        // kadane Algorithm
        int maxsum=INT_MIN;
        int currsum=0;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(i!=0 && abs(arr[i-1])%2 == abs(arr[i])%2){
                currsum=arr[i];
            }
            

            if(currsum>maxsum){
                maxsum=currsum;
            }

            if(currsum<0){
                currsum=0;
            }
        
        }
        if(n==1) maxsum=arr[0];

        if(flag==false){
            int mn=INT_MIN;
            for(int i=0;i<n;i++){
                if(arr[i]>mn) mn=arr[i];
            }
            cout<<mn<<endl;
        }
        else{
            cout<<maxsum<<endl;
        }
        
    }
}
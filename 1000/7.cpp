#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        
        vector<int>arr(2*n);
        vector<int>back(2*n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            back[i+n]=arr[i];  
        }
        for(int i=n;i<2*n;i++){
            cin>>arr[i];
            back[i-n]=arr[i];  
        }


        long long int ans=INT_MIN;
        long long int c=1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==arr[i+1]) c++;
            if(i==n-1 || arr[i]!=arr[i+1] ){
                ans=max(ans,c);
                 c=1;
            }
        }

        long long int x=1;
        for(int i=0;i<back.size();i++){
            if(back[i]==back[i+1]) c++;
            if(i==n-1 || back[i]!=back[i+1] ){
                ans=max(ans,x);
                 x=1;
            }
        }
        cout<<ans<<endl;

        

        
    }
}
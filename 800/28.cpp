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
        
       bool flag=true;
       for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag==true) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            vector<int>v=arr;
            sort(v.begin(),v.end());
            
            cout<<v[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

   
    }
}
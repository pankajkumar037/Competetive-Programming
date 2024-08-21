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
       if(n%2 != 0){
            int idx=arr[0];
            for(int i=1;i<n;i++){
                idx=idx^arr[i];
            }
            cout<<idx<<endl;
       }
       else{
            int idx=arr[0];
            for(int i=1;i<n;i++){
                idx=idx^arr[i];
            }
            if(idx==0) cout<<"1"<<endl;
            else cout<<"-1"<<endl;

       }
    }
}
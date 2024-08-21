#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }

       
        int idx=-1;
        for(int i=2;i<n;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
               idx=i;
               break;
            }
        }

        
        if(idx!=-1){
            cout<<"YES"<<endl;
            cout<<idx-1<<" "<<idx<<" "<<idx+1<<endl;
        }
        else cout<<"NO"<<endl;

      
    }
}
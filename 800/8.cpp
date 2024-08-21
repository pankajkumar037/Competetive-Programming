#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            arr[i]=y;
        }

        bool flag=false;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                flag=true;
                break;
            }
        }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
       

    }
}
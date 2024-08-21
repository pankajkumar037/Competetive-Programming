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

        if(is_sorted(arr.begin(),arr.end())==false) cout<<"0"<<endl;
        else{
            int mingap=INT_MAX;
            for(int i=0;i<n-1;i++){
                mingap=min(mingap,(arr[i+1]-arr[i]));
            }
            cout<<(mingap/2)+1<<endl;
        }

        
    }
}

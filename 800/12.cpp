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

        vector<int>ans;
        ans.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i-1]<=arr[i]){
                ans.push_back(arr[i]);
            }
            else{
               ans.push_back(arr[i]);
               ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }

    }
}

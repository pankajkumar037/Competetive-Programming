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
            cin>>arr[i];
        }

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }

        bool flag=true;
        for(auto it :mp){
            if(it.second==1){
                flag=false;
                break;
            }
        }

        if(flag==false) cout<<"-1"<<endl;
        else{
           

          vector<int>ans(n+1);
          for(int i=1;i<=n;i++){
            ans[i]=i;
          }

           int i=0;
            int j=1;

         while(i<n && j<n){
            if(arr[i]==arr[j]){
                swap(ans[i+1],ans[j+1]);
                j++;
            }
            else{
                i=j;
                j++;
            }
         }

         for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
          }
          cout<<endl;


        }



      
    }
}
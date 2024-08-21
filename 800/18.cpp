#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>ans;
        for(int i=n;i>=0;i--){
            if(i%k!=0){
                ans.push_back(i);
               if((n-i)!=0) ans.push_back(n-i);
                break;
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

      
        
    }
}
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
        
      int count=0;
      int i=0;
      while(i<n){
        int c=0;
        if(arr[i]==0){
            for(int k=i;k<n;k++){
                if(arr[k]!=0) break;
                c++;
            }
            count=max(c,count);
        }
        i++;
      }
      cout<<count<<endl;
         
    }
}
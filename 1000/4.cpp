#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int minofall=INT_MAX;
        vector<int>seclar;
        while(n--){
            int m;
            cin>>m;
            vector<int>arr(m);
            for(int i=0;i<m;i++){
                cin>>arr[i];
                minofall=min(minofall,arr[i]);
            }
            sort(arr.begin(),arr.end());
            seclar.push_back(arr[1]);
        }
        sort(seclar.begin(),seclar.end());
        long long  ans=minofall;
        for(int i=1;i<seclar.size();i++){
            ans+=seclar[i];
        }
        cout<<ans<<endl;
      
    }
}
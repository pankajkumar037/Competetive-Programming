#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n-1;i++){
            int y;
            cin>>y;
            arr[i]=y;
        }

        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=arr[i];
        }
        
        cout<<-1*(sum)<<endl;
        
    }
}
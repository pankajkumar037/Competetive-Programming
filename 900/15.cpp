#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        
        int c=0;
        for(int i=n-2;i>=0;i--){
            while(arr[i]!=0 && arr[i]>=arr[i+1]){
                c++;
                arr[i]/=2;
            }
            if(arr[i]>=arr[i+1]){
                c=-1;
                break;
            }
        }
      
      cout<<c<<endl;
    }
}

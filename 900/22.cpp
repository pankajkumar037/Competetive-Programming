#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long int>arr(n);
        for(long long int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long int no0=0;
        long long int no1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0) no0++;
            if(arr[i]==1) no1++;
        }

      
        cout<<powl(2,no0)*no1<<endl;
       
   
    }
}

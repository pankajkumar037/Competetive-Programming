#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int n,k;
        cin>>n>>k;

        vector<long long int>arr(n*k,0);
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }

        long long int medidx=-1;
        if(n%2==0) medidx=n/2;
        else medidx=(n/2)+1;

        if(n==2){
            long long int s=0;
            for(int i=0;i<n*k;i+=2){
                s+=arr[i];
            }
            cout<<s<<endl;
        }
        else{    
          long long  int j=n*k-n;
          long long int sum=0;

          for(int i=1;i<=k;i++){
            sum+=arr[j+medidx-1];
            j=j-n+1;
          }
          cout<<sum<<endl;
 
        }
  
    }
}
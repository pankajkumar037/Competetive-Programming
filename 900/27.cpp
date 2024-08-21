#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long  int n,x;
        cin>>n>>x;

        vector<long long int>arr(n,0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        long long int maxb=0;
        long long int sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]%x==0){
                maxb+=(arr[i]/x);
            }
            else maxb+=arr[i]/x+1;
            sum+=arr[i];
        }

        long long int minb=0;
        if(sum%x==0) minb=sum/x;
        else minb=(sum/x)+1;

        cout<<minb<<" "<<maxb<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
 

 
int main(){
   
        long long n,d;
        cin>>n>>d;

        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        reverse(arr.begin(),arr.end());

       int j=0;
       long long ans=0;
       long long sum=0;
       for(int i=1;i<=n;i++){
            sum+=arr[j];
            if(sum>d){
                ans++;
                sum=0;
                j++;
            }
       }
        cout<<ans<<endl;


       
    }











  
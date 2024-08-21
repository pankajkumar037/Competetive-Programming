#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>pre(n+1);
        pre[0]=0;
        vector<long long>arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
            pre[i+1]=pre[i]+arr[i];
        }

    
        long long ans=INT_MIN;
        for (long long i=1;i<=n;i++){
            vector<long long>help;
           if(n%i==0){
            
             for(long long j=i;j<=n;j+=i){
                long long sum=pre[j]-pre[j-(i)];
                help.push_back(sum);
             }

             sort(help.begin(),help.end());
            ans=max(ans,help[help.size()-1]-help[0]);
           }
        }
        cout<<ans<<endl;

      

    }
}
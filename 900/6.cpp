#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int  n;
        cin>>n;
        
        long long int ans=0;

        for(long long int i=1;i<=n;i++){
            if(n%i !=0){
                break;
            }
            ans++;
        }
        cout<<ans<<endl;

    }
}
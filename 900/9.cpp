#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
       
        int ans=0;
        // taking gcd of all diffrence b/w sorted of array 
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            if(abs(x-i) !=0){
               ans= __gcd(ans,abs(x-i));
            }
        }
        cout<<ans<<endl;
        
    }
}
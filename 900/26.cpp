#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;

        
        if(n%2==0){
            bool flag=false;
            while(n>=1){
                n=n/2;
                if( n!=1 && n%2!=0){
                    flag=true;
                    break;
                }
                
            }
            if(flag=true) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
      

    }
}
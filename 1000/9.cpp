#include<bits/stdc++.h>
using namespace std;
 
bool isprime(int n){
    bool flag=true;
    for(int i=3;i*i<=n;i++){
        if(n%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
       
        if(n%2==0) cout<<n/2<<" "<<n/2<<endl;
        else{
            if(isprime(n)==true){
                cout<<"1"<<" "<<n-1<<endl;
            }
            else{
                int a,b;
                for(int i=3;i*i<=n;i++){
                    if(n%i==0){
                        a=n/i;
                        b=n-a;
                        break;
                    }
                }
                cout<<a<<" "<<b<<endl;
            }
        }
 
    }
}








  
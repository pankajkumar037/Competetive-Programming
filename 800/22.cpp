#include<bits/stdc++.h>
using namespace std;

void f(long long int n,long long int k){
    if(n%2==0) cout<<"YES"<<endl;
    else{
        if(k%2!=0){
            cout<<"YES"<<endl;
           
        }
        else{
             cout<<"NO"<<endl;
        }
        
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;

       
        f(n,k);
        
    }
}
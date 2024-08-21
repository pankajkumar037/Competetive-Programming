#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b;
        cin>>a>>b;

        if(a==b) cout<<"0"<<" "<<"0"<<endl;
        else{
           if(b>a) swap(a,b);
           long long int g=(a-b);
            
            cout<<g<<" "<<min(g-(a%g),a%g)<<endl;
        }
       
   
    }
}

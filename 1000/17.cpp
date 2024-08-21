#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int x=log2(n-1);
        int pow2=pow(2,x);
        
        for(int i=n-1;i>=pow2;i--){
            cout<<i<<" ";
        }
        for(int i=0;i<pow2;i++){
            cout<<i<<" ";
        }
        cout<<endl;


      
    }
}
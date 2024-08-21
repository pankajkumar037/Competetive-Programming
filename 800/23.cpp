#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;

       if(a<(c-d)) cout<<"-1"<<endl;
       else if(a==c && b==d) cout<<"0"<<endl;
       else{
        long long int x=-(d-b+c);
        long long int y=b;

        cout<<abs(a-x)+abs(c-x)<<endl;
       }
        
        
    }
}
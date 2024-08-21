#include<bits/stdc++.h>
using namespace std;

int main(){
 
        long long a,b,x,y;
        cin>>a>>b>>x>>y;

        long long g=__gcd(x,y);
        x=x/g;
        y=y/g;

        long long n=a/x;
        long long m=b/y;
        cout<<min(n,m)<<endl;
      
      
    

}
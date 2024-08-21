#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
     bool flag=true;
     for(int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=false;
                break;
            }
        }
    return  flag;
}
int  primenxt(int n){
   int temp=n;
   while(1){
    if(isprime(temp)==true) break;
    else temp++;
   }
   return temp;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long d;
        cin>>d;

        int first=1+d;

        first=primenxt(first);

        int second=first+d;
        second=primenxt(second);

        long long x=first*second;
        cout<<x<<endl;

        
    }
}
//'e
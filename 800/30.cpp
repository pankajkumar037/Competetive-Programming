#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int digit=0;
        int ld=-1;
        while(n>0){
            digit++;
            ld=n%10;
            n/=10;
        }

        cout<<(digit-1)*9+ld<<endl;

    }
}
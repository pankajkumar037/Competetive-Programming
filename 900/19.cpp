#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long int x,n;
        cin>>x>>n;

        if(n%4==0) cout<<x<<endl;
        else if(n%4==1) {
            if(x%2==0) cout<<x-(((n/4)*4)+1)<<endl;
            else cout<<x+(((n/4)*4)+1)<<endl;
        }
        else if(n%4==2){
            if(x%2==0){
                cout<<x-(((n/4)*4)+1)+(((n/4)*4)+2)<<endl;
            }
            else{
                cout<<x+(((n/4)*4)+1)-(((n/4)*4)+2)<<endl;
            }
        }
        else if(n%4==3){
            if(x%2==0){
                cout<<x-(((n/4)*4)+1)+(((n/4)*4)+2)+(((n/4)*4)+3)<<endl;
            }
            else{
                cout<<x+(((n/4)*4)+1)-(((n/4)*4)+2)-(((n/4)*4)+3)<<endl;
            }
        }

       
    }
}

#include<bits/stdc++.h>
using namespace std;

void f(int n,int k,int x){
    if(k==1) cout<<"NO"<<endl;
    if(k>1 && x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<"1"<<" ";
        }
        cout<<endl;
        return;
    }
    if(k>1 && x==1){
        if(n%2==0){
            cout<<"YES"<<endl;
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<"2"<<" ";
            }
            cout<<endl;
            return;
        }

        if(n%2!=0 && k==2){
            cout<<"NO"<<endl;
            return;
        }
        if(n==3 && k==3){
            cout<<"YES"<<endl;
            cout<<"1"<<endl;
            cout<<"3"<<endl;
            return;
        }


        if(n>=5){
            cout<<"YES"<<endl;
            cout<<(n-3)/2+1<<endl;

            for(int i=0;i<(n-3)/2;i++){
                cout<<"2"<<" ";
            }
            cout<<"3"<<" ";
            cout<<endl;
            return;
        }
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        f(n,k,x);
        
    }
}
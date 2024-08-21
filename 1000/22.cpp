#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;

        if(b>a) cout<<"1"<<endl;
        else if(b==a) cout<<"2"<<endl;
        else{

        
        
         long long gans=INT_MAX;
        

        for(long long i=b;i*i<=a;i++){
            long long lcans=i-b;
            if(i==1){
                lcans++;
                i++;
            }
            long long x=a;
            while(x>0){
                x/=i;
                lcans++;
            }
            gans=min(gans,lcans);
            
        }
        cout<<gans<<endl;
        }  
    }
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s="";
        for(int i=0;i<n;i++){
            char y;
            cin>>y;
            s+=y;
        }

        bool flag=false;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                c=0;
            }
            else{
                c++;
                if(c==3){
                    flag=true;
                    break;  
                }
            }  
        }
       if(flag==true) cout<<"2"<<endl;
       else{
            int ans=0;
            for(int i=0;i<n;i++){
                if(s[i]=='.') ans++;
            }
            cout<<ans<<" "<<endl;
       } 
        
        
        
    }
}
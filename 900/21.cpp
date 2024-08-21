#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

      
        string s;
        cin>>s;
        int n=s.length();
        int ans=n;
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                int val=(s[i]-'0')*10+(s[j]-'0');
                if(val%25==0){
                    ans=min(ans,(n-i-2));
                }
            }
        }

        cout<<ans<<endl;
        
       
    }
}

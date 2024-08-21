#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

      
        int z=0;
        int o=0;
        for(int i=0;i<s.length();i++ ){
            if(s[i]=='0') z++;
            if(s[i]=='1') o++;
        }

        int ans=min(z,o);

        if(ans%2!=0) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;

    }
}
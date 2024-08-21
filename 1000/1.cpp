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
        for(int i=0;i<s.length();i++){
            if(s[i]=='0') z++;
            else o++;
        }

        if(o==z) cout<<"0"<<endl;
        else{
            for(int i=0;i<s.length();i++){
               if(s[i]=='0'){
                    if(o>0) o--;
                    else{
                        cout<<s.length()-i<<endl;
                        break;

                    }   
               }
               else{
                    if(z>0) z--;
                    else{
                        cout<<s.length()-i<<endl;
                        break;
                    }
               }

            }
        }
        

    }
}
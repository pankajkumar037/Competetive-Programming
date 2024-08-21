#include<bits/stdc++.h>
using namespace std;
 

 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        char ch;
        cin>>ch;

        string s;
        cin>>s;

        vector<int>charidx;
        for(int i=0;i<n;i++){
            if(s[i]==ch) charidx.push_back(i);
        }
      


        s+=s;

        vector<int>go;
        for(int i=0;i<2*n;i++){
            if(s[i]=='g'){
             go.push_back(i);
            }
        }
       

       int i=0;
       int j=0;
       int ans=INT_MIN;
       while(i<charidx.size() && j<go.size()){
        if(charidx[i]<=go[j]){
            ans=max(ans,go[j]-charidx[i]);
            i++;
        }
        else{
            j++;
        }
       }
       cout<<ans<<endl;



    }
}








  
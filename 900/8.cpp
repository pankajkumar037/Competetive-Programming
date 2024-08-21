#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        string s;
        cin>>s;
        
        int maxc=1;
        int locc=1;
       for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                locc++;
            }
            else{
                locc=1;
            }
            maxc=max(locc,maxc);
       }
       cout<<maxc+1<<endl;
    }
}
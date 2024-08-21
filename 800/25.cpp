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


        int i=0;
        int j=n-1;

        int ans=0;
        while(i<=j){
            if(s[i]!=s[j]){
                i++;
                j--;
            }
            else{
                ans=j-i+1;
                break;
            }
        }
        cout<<ans<<endl;
    
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;


        unordered_map< long long int, long long int>mp;
        bool flag=true;
        while(n>1){
            if(n%2==0){
                mp[2]++;
                n/=2;
            }
            else if(n%3==0){
                mp[3]++;
                n/=3;
            }
            else if(n>3){
                flag=false;
                break;
            }
        }

        if(flag==false) cout<<"-1"<<endl;
        else{
            if(mp[2]<=mp[3]) {
                cout<<(mp[3]-mp[2])+mp[3]<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
        }

    }
}
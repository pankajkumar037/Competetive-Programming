#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s="";
        for(int i=0;i<n;i++){
            char y;
            cin>>y;
            s+=y;
        }

        if(n==1) cout<<"YES"<<endl;
        else{
            
            unordered_map<int,int>mp;
            for(int i=0;i<s.length();i++){
                mp[s[i]]++;
            }

            for(auto &it:mp){
                if(k>0){
                    if(it.second%2 !=0){
                        it.second=it.second-1;
                        k--;
                    }
                }
            }
            if(k>0){
                for(auto &it:mp){
                    if(k>0){
                       if(it.second==k){
                         it.second=0;
                         k=0;
                         break;
                        }
                        if(it.second>k){
                         it.second=it.second-k;
                         k==0;
                         break;
                        }
                        if(it.second<k){
                            it.second=0;
                            k=k-it.second;
                        }

                    }
                }
            }

            int ans=0;
            for(auto it:mp){
                if(it.second%2!=0) ans++;
            }

            if(ans==0||ans==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }
}
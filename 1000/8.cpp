#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        
        string s;
        cin>>s;

        vector<int>pre;
        unordered_set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            pre.push_back(st.size());
        }
       

        st.clear();

        vector<int>suff(n,0);
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            suff[i]=st.size();
        }
       
        
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pre[i]+suff[i+1]);
        }
        cout<<ans<<endl;


    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;

        vector<long long>a(n);
        vector<long long>x(q);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<q;i++){
            cin>>x[i];
        }

        unordered_set<int>st;

        for(long long i=1;i<=q;i++){
            if(st.count(x[i-1])) continue;
            st.insert(x[i-1]);
            
            long long y=x[i-1];
            long long z=(1<<y);
            for(long long j=1;j<=n;j++){
                if(a[j-1]%z==0){
                    a[j-1]+=(1<<(y-1));
                }
            }

        }

        for(long long i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
         cout<<endl;


    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int w,h;
        cin>>w>>h;

        long long ans=INT_MIN;
        for(int i=0;i<4;i++){
            long long k;
            cin>>k;
            long long x,y;
            cin>>x;
            k--;
            while(k--){
                cin>>y;
            }

            if(i<2){
                ans=max((y-x)*h,ans);
            }
            else{
                ans=max((y-x)*w,ans);
            }
        }
        cout<<ans<<endl;

      
    }
}
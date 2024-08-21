#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int kx,ky;
        cin>>kx>>ky;

        int qx,qy;
        cin>>qx>>qy;

        vector<pair<int,int>>directions={{x,y},{x,-y},{-x,y},{-x,-y},{y,x},{y,-x},{-y,x},{-y,-x}};

        set<pair<int,int>>set1,set2;

        for(auto d:directions){
            int a=kx+d.first;
            int b=ky+d.second;
            set1.insert({a,b});

             a=qx+d.first;
             b=qy+d.second;
            set2.insert({a,b});

        }

        int ans=0;
        for(auto pos:set1){
            if(set2.find(pos) !=set2.end()) ans++;
        }

        cout<< ans<<endl;
       

    }
}
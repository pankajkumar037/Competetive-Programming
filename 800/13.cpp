#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

       vector<int>arr(n);
       for(int i=0;i<n;i++){
            int y;
            cin>>y;
            arr[i]=y;
        }

        vector<int>a;
        vector<int>b;

        sort(arr.begin(),arr.end());
        a.push_back(arr[0]);

        for(int i=1;i<n;i++){
            if(a[a.size()-1]%arr[i]==0){
                a.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }

        if(a.size()==0 || b.size()==0) cout<<"-1"<<endl;
        else{
            cout<<a.size()<<" "<<b.size()<<endl;
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;

        }
       

    }
}

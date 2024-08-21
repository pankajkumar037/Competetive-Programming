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
        
        int no1=0;
        int no2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1) no1++;
            if(arr[i]==2) no2++;
        }
        if(no2==0) cout<<"1"<<endl;
        else if((no2%2)!=0) cout<<"-1"<<endl;
        else{
            int c=0;
            int idx=-1;
            for(int i=0;i<n;i++){
                if(arr[i]==2){
                    c++;
                    idx=i+1;
                    if(c==no2/2) break;
                    
                }
            }
            cout<<idx<<endl;

        }

   
    }
}
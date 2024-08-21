#include<bits/stdc++.h>
using namespace std;

int answer(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==0){
           return 0;
        }
    }

    sort(arr.begin(),arr.end());
    if(arr[0]>0) return arr[0];
    else{
        int idx;
        int a;
        int b;
        if(arr[n-1]>0){
             for(int i=0;i<n-1;i++){
            if(arr[i+1]>0){
                a=abs(arr[i]);
                b=arr[i+1];
                idx=min(a,b);
                break;
            }
            }
            return idx;
        }
        else{
            return abs(arr[n-1]);
        }
       
    }
}

int main(){
    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr[i]=y;
    }

    cout<<answer(arr,n)<<endl;
    
}
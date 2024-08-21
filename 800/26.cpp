#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) 
{ 
  if (a == 0) 
    return b; 
  return gcd(b % a, a); 
}
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
        
        bool flag=false;
        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
                if(gcd(arr[i],arr[j])<=2){
                    flag=true;
                    break;
                }
           }
        }
       if(flag==false) cout<<"NO"<<endl;
       else cout<<"YES"<<endl;

        
    }
}
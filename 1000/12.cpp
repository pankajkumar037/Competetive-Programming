#include<bits/stdc++.h>
using namespace std;
 
int main(){
   
   int t;
   cin>>t;
   while(t--){
    long long n,k,b,s;
    cin>>n>>k>>b>>s;
    long long y=(k*b);
    long long o=n*(k-1);
    if(y>s || s>(y+o)) cout<<"-1"<<endl;
    else{
       vector<long long>v(n,0);
       v[0]=y;
       s=s-y;
       for(int i=1;i<n;i++){
        if(s>0){
            v[i]=min(s,k-1);
            s=s-min(s,k-1);
        }
        else{
            v[i]=0;
        }
       }

       for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
       }
       cout <<endl;
       
       
    }

    

   }

       

      


       
}

/*
 long long  rem=s-(y);
        long long z=(k-1)*(n-1);
        if(z>=rem){
            vector<long long>arr(n,0);
            arr[n-1]=y;
            long long i=n-2;
            while(rem>0 && i>=0){
               if(rem>=k-1){
                arr[i]=k-1;
                rem-=(k-1);
               }
               else{
                arr[i]=rem;
                rem=0;
               }
               i--;
            }

            for(long long i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"-1"<<endl;


*/











  
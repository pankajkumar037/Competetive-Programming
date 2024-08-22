#include<bits/stdc++.h>
using namespace std;
int pivot_element(vector<int>& nums){
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int mid=lo+(hi-lo)/2;

        while(lo<hi){
            
            if(nums[mid]>=nums[0]){
                lo=mid+1;
            }
            else {
                hi=mid;
            }

           mid=lo+(hi-lo)/2;
        }

        return lo;
    }
int main(){
    vector<int>arr={4,5,6,7,0,1,2};
    cout<<pivot_element(arr);
}
#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k){
    map<int,int> mpp;
    int sum=0,maxlength=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        if(sum==k){
            maxlength=max(maxlength,i+1);
        }
        int rem=sum-k;
        if(mpp.find(rem)!=mpp.end()){
            int idx=i-mpp[rem];
            maxlength=max(maxlength,idx);
        }
        if(mpp.find(sum)==mpp.end()){
            mpp[sum]=i;
        }
    }
    return maxlength;
}

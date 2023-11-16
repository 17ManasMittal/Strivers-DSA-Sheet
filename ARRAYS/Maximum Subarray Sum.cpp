//kadanes Algo
#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long int sum=0;
    long long int sum1=INT_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>sum1){
            sum1=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    if(sum1<0){
        return 0;
    }
    return sum1;
}

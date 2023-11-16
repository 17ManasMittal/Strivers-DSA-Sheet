int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum=0;
    int maxlen=-1;
    int i=0,j=0;
    while(j<a.size()){
        sum=sum+a[j];
        if(sum>k){
            while(sum>k){
                sum=sum-a[i];
                i++;
            }
        }
        if(sum==k){
            maxlen=max(maxlen,j-i+1);
        }
        j++;
    }
    return maxlen;
}

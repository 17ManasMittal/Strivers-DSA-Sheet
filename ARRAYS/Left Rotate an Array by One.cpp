#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int> ans(arr.size(),-1);
    for(int i=1;i<arr.size();i++){
        ans[(i%n)-1]=arr[i];
    }
    ans[n-1]=arr[0];
    return ans;
}

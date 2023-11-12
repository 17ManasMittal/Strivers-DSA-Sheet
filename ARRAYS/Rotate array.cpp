#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    vector<int> arr;
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        arr.push_back(val);
    }
    cin>>k;
    vector<int> ans(n,-1);
    for(int i=0;i<n;i++){
        ans[(n+i-k)%n]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

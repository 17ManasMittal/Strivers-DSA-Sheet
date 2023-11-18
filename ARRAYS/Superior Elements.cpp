#include<bits/stdc++.h>
vector<int> superiorElements(vector<int>&a) {
    vector<int> leaders;
    int max=a[a.size()-1];
    leaders.push_back(max);
    for(int i=a.size()-2;i>=0;i--){
        if(a[i]>max){
            leaders.push_back(a[i]);
            max=a[i];
        }
    }
    return leaders;
}

#include<bits/stdc++.h>
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int mine=INT_MAX;
    int maxe=INT_MIN;
    for(int i=0;i<n;i++){
        mine=min(mine,a[i]);
        maxe=max(maxe,a[i]);
    }
    int slarge=-1;
    for(int i=0;i<n;i++){
        if(a[i]>slarge&&a[i]<maxe){
            slarge=a[i];
        }
    }
    int ssmall=maxe;
    for(int i=0;i<n;i++){
        if(a[i]<ssmall&&a[i]>mine){
            ssmall=a[i];
        }
    }
    vector<int> ans={slarge,ssmall};
    return ans;
}

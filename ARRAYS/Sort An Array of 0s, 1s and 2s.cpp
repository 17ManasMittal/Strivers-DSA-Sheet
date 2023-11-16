#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    int i=0,mid=0;
    int j=n-1;
    while(mid<=j){
        if(arr[mid]==0){
            swap(arr[mid],arr[i]);
            i++;
            mid++;
        }else if(arr[mid]==2){
            swap(arr[mid],arr[j]);
            j--;
        }else{
            mid++;
        }
    }
}

#include<bits/stdc++.h>
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int i=0,j=book.size()-1;
    while(i<=j){
        if((book[i]+book[j])==target){
            return "YES";
        }
        else if(target>(book[i]+book[j])){
            i++;
        }else{
            j--;
        }
    }
    return "NO";
}

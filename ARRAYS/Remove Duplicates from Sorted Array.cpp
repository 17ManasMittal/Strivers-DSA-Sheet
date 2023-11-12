#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	stack<int> stk;
	for(int i=0;i<n;i++)
	{
		if(stk.size()==0)
		{
			stk.push(arr[i]);
		}
		else if(stk.top()==arr[i])
		{
			continue;
		}
		else{
			stk.push(arr[i]);
		}
	}
	arr.clear();
	return stk.size();
}

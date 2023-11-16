#include<bits/stdc++.h>
int majorityElement(vector<int> v) {
	int floor=v.size()/2;
	map<int,int> mp;
	for(int i=0;i<v.size();i++){
		mp[v[i]]++;
	}
	int ans;
	for(auto i:mp){
		if(i.second>floor){
			ans=i.first;
		}
	}
	return ans;
}

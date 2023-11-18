vector<int> alternateNumbers(vector<int>&a) {
    vector<int> ans(a.size(),-1);
    int trackpos=0;
    int trackneg=1;
    for(int i=0;i<a.size();i++){
        if(a[i]<0){
            ans[trackneg]=a[i];
            trackneg+=2;
        }else{
            ans[trackpos]=a[i];
            trackpos+=2;
        }
    }
    return ans;
}

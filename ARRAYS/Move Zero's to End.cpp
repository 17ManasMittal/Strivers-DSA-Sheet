vector<int> moveZeros(int n, vector<int> a) {
    int i=-1,j;
    for(int k=0;k<a.size();k++){
        if(a[k]==0){
            i=k;
            break;
        }
    }
    if(i==-1){
        return a;
    }
    j=i+1;
    while(j<a.size()){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
        j++;
    }
    return a;
}

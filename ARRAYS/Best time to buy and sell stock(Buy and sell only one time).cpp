int bestTimeToBuyAndSellStock(vector<int>&prices) {
    int maxpro=0;
    int sell=prices[prices.size()-1];
    for(int i=prices.size()-2;i>=0;i--){
        if(prices[i]>sell){
            sell=prices[i];
        }else{
            maxpro=max(maxpro,sell-prices[i]);
        }
    }
    return maxpro;
}

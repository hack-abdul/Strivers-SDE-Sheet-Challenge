#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int ans = 0, buyingPrice = prices[0], size = prices.size();
    for(int i=1; i<size; i++){
        int price = prices[i];
        if(price < buyingPrice) buyingPrice = price;
        int currentProfit = price - buyingPrice;
        ans = max(ans, currentProfit);
    }
    if(ans < 0)return 0;
    return ans;
}
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 0 || prices.size() == 1) {
            return 0;
        } 
        int lowest = 100001;
        int maxProfit = 0;
        int pist = 0;

        for(int i=0; i<prices.size(); i++) {
            if(prices[i] < lowest) {
                lowest = prices[i];
            }
            pist = prices[i] - lowest;
            if(maxProfit < pist) {
                maxProfit = pist;
            }
        }
        return maxProfit;
    }
};
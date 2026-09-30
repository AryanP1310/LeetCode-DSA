class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lc = prices[0];
        int mp = 0;
        for(int i = 1; i <prices.size(); i++)
        {
            if(prices[i] < lc)
            lc = prices[i];
            else
            mp = max(mp, (prices[i]- lc));
            
        }
        return mp;
    }
};
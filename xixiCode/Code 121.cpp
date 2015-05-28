class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int tmp, profit = 0, cur = 0;
		int len = prices.size();
		if (len>0) tmp = prices[0];
		for (int i = 1; i < len; i++) {
			if (prices[i] < tmp) tmp = prices[i];
			else {
				cur = prices[i] - tmp; profit = max(profit, cur);
			}
		}
		return profit;
	}
};
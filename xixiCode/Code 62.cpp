// dp equation is dp[i][j]=dp[i-1]+dp[j-1]
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,1));//initalize 2,1 and 1,2
        for(int i=1;i<m;i++)
        for(int j=1;j<n;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
        return dp[m-1][n-1];
    }
};

//update data every rows
class Solution {
public:
	int uniquePaths(int m, int n) {
		vector<int> dp(n, 1);
		for (int i = 1; i<m; i++)
			for (int j = 1; j < n; j++)
				dp[j] += dp[j - 1];//magic
		return dp[n - 1];
	}
};

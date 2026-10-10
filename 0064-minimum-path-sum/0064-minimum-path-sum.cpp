
class Solution {
public:
    int solve(vector<vector<int>>& grid, int n, int m, vector<vector<int>> &dp) {
        if (n < 0 || m < 0) {
            return INT_MAX;
        }

        if (n == 0 && m == 0) {
            return grid[0][0];
        }

        if(dp[n][m] != -1){
            return dp[n][m] ;
        }

        int top = solve(grid, n - 1, m, dp);
        int left = solve(grid, n, m - 1, dp);

        return dp[n][m] = grid[n][m] + min(top, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1)) ;

        return solve(grid, n - 1, m - 1, dp);
    }
};

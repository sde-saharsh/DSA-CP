class Solution {
public:
    int ninjaTraining(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // dp[day][last]
        vector<vector<int>> dp(n, vector<int>(3, 0));

        // Base case (day 0)
        dp[0][0] = max(matrix[0][1], matrix[0][2]);
        dp[0][1] = max(matrix[0][0], matrix[0][2]);
        dp[0][2] = max(matrix[0][0], matrix[0][1]);

        // Fill DP
        for (int day = 1; day < n; day++) {
            for (int last = 0; last < 3; last++) {
                dp[day][last] = 0;
                for (int task = 0; task < 3; task++) {
                    if (task != last) {
                        int pts = matrix[day][task] + dp[day - 1][task];
                        dp[day][last] = max(dp[day][last], pts);
                    }
                }
            }
        }

        // Final answer: max of last day
        return max({dp[n-1][0], dp[n-1][1], dp[n-1][2]});
    }
};

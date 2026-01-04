#include <bits/stdc++.h>
using namespace std;

class Solution{
private:
    /* Function to find the maximum cherries
    that can be collected using memoization*/
    int func(int i, int j1, int j2, int n, int m, vector<vector<int>> &matrix, vector<vector<vector<int>>> &dp) {
        // Base cases
        if (j1 < 0 || j1 >= m || j2 < 0 || j2 >= m)
        return -1e9; 

        if (i == n - 1) {
            if (j1 == j2)
                return matrix[i][j1];
            else
                return matrix[i][j1] + matrix[i][j2];
        }
        
        /* If the result for this state 
        is already computed, return it*/
        if (dp[i][j1][j2] != -1)
            return dp[i][j1][j2];

        int maxi = INT_MIN;
    
        // Try all possible moves for both positions (j1, j2)
        for (int di = -1; di <= 1; di++) {
            for (int dj = -1; dj <= 1; dj++) {
                int ans;
            
                if (j1 == j2)
                    ans = matrix[i][j1] + func(i + 1, j1 + di, j2 + dj, n, m, matrix, dp);
                else
                    ans = matrix[i][j1] + matrix[i][j2] + func(i + 1, j1 + di, j2 + dj, n, m, matrix, dp);
            
                // Update the maximum result
                maxi = max(maxi, ans);
            }
        }
    
        // Store the maximum result for this state in dp
        return dp[i][j1][j2] = maxi;
    }
public:
    // Function to find maximum cherries that can be collected
    int cherryPickup(vector<vector<int>> &matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        // Initialize a 3D DP array to store computed results
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));

        //Return the maximum cherries collected
        return func(0, 0, m - 1, n, m, matrix, dp);
    }
};

int main() {
    vector<vector<int>> matrix{
        {2, 3, 1, 2},
        {3, 4, 2, 2},
        {5, 6, 3, 5},
    };
    
    //Create an instance of Solution class
    Solution sol;

    // Call the function and print the result
    cout << sol.cherryPickup(matrix);

    return 0;
}
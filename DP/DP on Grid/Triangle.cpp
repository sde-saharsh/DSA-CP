#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to find the minimum path sum using tabulation
    int func(vector<vector<int> > &triangle, int n, vector<vector<int> > &dp) {
        /* Initialize the bottom row of dp 
        with the values from the triangle*/
        for (int j = 0; j < n; j++) {
            dp[n - 1][j] = triangle[n - 1][j];
        }

        // Iterate through the triangle rows in reverse order
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i; j >= 0; j--) {
                // Calculate the minimum path sum for current cell
                int down = triangle[i][j] + dp[i + 1][j];
                int diagonal = triangle[i][j] + dp[i + 1][j + 1];

                // Store the minimum of the two possible paths in dp
                dp[i][j] = min(down, diagonal);
            }
        }
        // Top-left cell of dp now contains the minimum path sum
        return dp[0][0];
    }
public:
    //Function to find out the minimum path sum
    int minTriangleSum(vector<vector<int>>& triangle) {
        // Get the number of rows in the triangle
        int n = triangle.size();
        
        /* Initialize a memoization table
        to store computed results*/
        vector<vector<int> > dp(n, vector<int>(n, -1));
    
        //Return the minimum path sum
        return func(triangle, n, dp);
    }
};
int main() {
    vector<vector<int> > triangle{{1},
                                   {2, 3},
                                   {3, 6, 7},
                                   {8, 9, 6, 10}};
    
    //Create an instance of the Solution class
    Solution sol;
    
    // Call the minimumPathSum function and print result
    cout << sol.minTriangleSum(triangle);

    return 0;
}
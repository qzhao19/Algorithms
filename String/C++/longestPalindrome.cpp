class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) {
            return "";
        }

        string result;
        vector<vector<int>> dp(n, vector<int>(n));

        for (int length = 0; length < n; length++) {
            for (int i = 0; i + length < n; i++) {
                int j = i + length;
                if (length == 0) {
                    dp[i][j] = 1;
                } 
                else if (length == 1) {
                    dp[i][j] = (s[i] == s[j]);
                }
                else {
                    dp[i][j] = (s[i] == s[j]) && dp[i+1][j-1];
                }

                if (dp[i][j] && result.size() < length + 1) {
                    result = s.substr(i, length + 1);
                }
            }
        }
        return result;
    }
};
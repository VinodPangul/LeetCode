class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size()+1;
        int n = text2.size()+1;
        
        int dp[m][n];
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(text1[i-1] == text2[j-1]) {
                    dp[i][j] = dp[i-1][j-1]+1;
                }else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
                
                
            }
        }
       
        return dp[m-1][n-1];
        
        
    }
};
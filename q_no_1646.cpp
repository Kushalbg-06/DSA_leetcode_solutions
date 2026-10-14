#1646 Get Maximum in Generated Array
class Solution {
    public:
        int getMaximumGenerated(int n) {
            if(n == 0){
            return 0;
            }
            vector<int> dp(n + 1, 0);
            dp[0] = 0;
            dp[1] = 1;
            int maxi = 1;
            for(int i = 1; 2 * i <= n; i++) {
                dp[2 * i] = dp[i];
    
                if(2 * i + 1 <= n) {
                    dp[2 * i + 1] = dp[i] + dp[i + 1];
                }
            }
    
            for(int i = 0; i <= n; i++) {
                maxi = max(maxi, dp[i]);
            }
    
            return maxi;
        }
    };
    
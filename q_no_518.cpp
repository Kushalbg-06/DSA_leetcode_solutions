#518. Coin Change II
class Solution {
    public:
        int change(int amount, vector<int>& coins) {
    
            vector<long long> dp(amount + 1, 0);
    
            dp[0] = 1;
    
            for(int i = 0; i < coins.size(); i++) {
    
                for(int j = coins[i]; j <= amount; j++) {
    
                    dp[j] += dp[j - coins[i]];
    
                    if(dp[j] > INT_MAX)
                        dp[j] = INT_MAX;
                }
            }
    
            return dp[amount];
        }
    };
#time complexity:O(n*amount)
#space complexity:O(amount)
#322. Coin Change
class Solution {
    public:
        int coinChange(vector<int>& coins, int amount) {
            vector<int> minCoins(amount + 1, amount + 1);
    
            minCoins[0] = 0;
    
        for(int i = 1; i <= amount; i++) {
            for(int j = 0; j < coins.size(); j++) {
                if(i - coins[j] >= 0) {
                minCoins[i] = min(minCoins[i],1 + minCoins[i - coins[j]]);
                    }
                }
            }
    
            if(minCoins[amount] == amount + 1)
                return -1;
    
            return minCoins[amount];
        }
    };
#time complexity:O(n**2)
#space complexity:O(n)

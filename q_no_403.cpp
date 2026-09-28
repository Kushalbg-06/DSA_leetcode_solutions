#403. Frog Jump
class Solution { 
    public: 
        int frogJump(vector<int>& height) { 
            int n = height.size(); 
            vector<int> dp(n, 0); 
    
            for(int i = 1; i < n; i++) { 
                int onestep = dp[i-1] + abs(height[i] - height[i-1]); 
    
                int twostep = INT_MAX; 
    
                if(i > 1) { 
                    twostep = dp[i-2] + abs(height[i] - height[i-2]); 
                } 
    
                dp[i] = min(onestep, twostep); 
            }    
    
            return dp[n-1]; 
        }
    };
#time complexity:O(n)
#space complexit:O(n)
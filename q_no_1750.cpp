#1750 Minimum Length of String After Deleting Similar Ends
#solved using two pointer approach
class Solution {
    public:
        int minimumLength(string s) {
            int n = s.size();
            int l = 0;
            int r = n - 1;
            int mini = INT_MAX;
            while (r > l && s[l] == s[r]) {
                char ch = s[l];
                while (r >= l && s[l] == ch) {#move the l pointer until the char is not matching
                    l++;
                }
                while (r >= l && s[r] == ch) { #move the r pointer until the char is not matching
                    r--;
                }
    
                mini = min(mini, r - l + 1);
            }
            if (mini == INT_MAX) {
                return n;
            }
            return mini;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
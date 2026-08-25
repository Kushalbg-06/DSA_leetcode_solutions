#1004 Max Consecutive Ones 
#solved using sliding window with variable size
class Solution {
    public:
        int longestOnes(vector<int>& a, int k) {
            int n = a.size();
            int l = 0;
            int r = 0;
            int maxlen = 0;
            int zerocount = 0;
            for (int r = 0; r < n; r++) {
                if (a[r] == 0) {
                    zerocount++;
                }
                while (zerocount > k) {
                    if (a[l] == 0) {
                        zerocount--;
                    }
                    l++;
                }
                maxlen = max(maxlen, r - l + 1);
            }
            return maxlen;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
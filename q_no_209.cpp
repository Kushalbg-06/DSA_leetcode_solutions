#209.Minimum Size Subarray Sum
#optimal approach using sliding window (variable size K)
class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& a) {
            int n = a.size();
            int l = 0;
            int r = 0;
            int sum = 0;
            int minlen = INT_MAX;
            while (r < n) {
                sum = sum + a[r];
                while (sum >= target) {
                    minlen = min(minlen, r - l + 1);
                    sum -= a[l];
                    l++;
                }
                r++;
            }
            if (minlen == INT_MAX) {
                return 0;
            }
            return minlen;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
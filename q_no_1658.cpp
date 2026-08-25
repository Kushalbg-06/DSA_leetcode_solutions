#1658  Minimum Operations to Reduce X to Zero
#optimal Solution using sliding window variable size
class Solution {
    public:
        int minOperations(vector<int>& a, int x) {
            int n = a.size();
            int sum = 0;
            int total = 0;
            for (int i = 0; i < n; i++) {
                total += a[i];
            }
            int target = total - x;
            if (target < 0) {
                return -1;
            }
            int l = 0;
            int maxlen = -1;
            for (int r = 0; r < n; r++) {
                sum += a[r];
                while (sum > target) {
                    sum -= a[l];
                    l++;
                }
                if (sum == target) {
                    maxlen = max(maxlen, r - l + 1);
                }
            }
            if (maxlen == -1) {
                return -1;
            }
            return n - maxlen;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
#713 Subarray Product Less Than K
solved using sliding window variable size pattern
class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& a, int k) {
            if (k <= 1) {
                return 0;
            }
            int n = a.size();
            int product = 1;
            int l = 0;
            int r = 0;
            int count = 0;
            for (int r = 0; r < n; r++) {
                product *= a[r];
                while (product >= k) {
                    product /= a[l];
                    l++;
                }
                count += r - l + 1;
            }
            return count;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
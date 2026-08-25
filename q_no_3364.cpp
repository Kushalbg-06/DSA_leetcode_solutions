#3364.Minimum Positive Sum Subarray 
#sliding window with variable size 
class Solution {
    public:
        int minimumSumSubarray(vector<int>& a, int l, int r) {
            int n = a.size();
            int minsum = INT_MAX;
            for (int i = 0; i < n; i++) {
                int sum = 0;
                for (int j = i; j < n; j++) {
                    sum += a[j];
                    int len = j - i + 1;
                    if (len >= l && len <= r) {
                        if (sum > 0) {
                            minsum = min(minsum, sum);
                        }
                    }
                }
            }
            if (minsum == INT_MAX) {
                return -1;
            }
            return minsum;
        }
    };
#time complexity:O(n)
#space complexity:O(1)
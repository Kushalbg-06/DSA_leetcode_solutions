#69. Sqrt(x)
#solved using binary search
class Solution {
    public:
        int mySqrt(int x) {
            if (x < 2) {
                return x;
            }
            int left = 0;
            int right = x;
            int ans = 0;
            while (right > left) {
                int mid = (left + right) / 2;
                if (mid <= x / mid) {
                    ans = mid;
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
            return ans;
        }
    };
#time complexity:O(log n)
#space complexity:O(1)
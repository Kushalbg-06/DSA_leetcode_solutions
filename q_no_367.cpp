#367 Valid Perfect Square
#solved using binary search
class Solution {
    public:
        bool isPerfectSquare(int num) {
            long long l = 0;
            long long r = num;
            while (r >= l) {
                long long mid = l + (r - l) / 2;
                if (mid * mid == num) {
                    return true;
                } else if (mid * mid < num) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
            return false;
        }
    };
#time complexity:O(log n)
#space complexity:O(1)
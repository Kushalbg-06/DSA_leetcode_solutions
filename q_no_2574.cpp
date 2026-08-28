#2574 Left and Right Sum Differences
#solved using prefixsum pattern
class Solution {
    public:
        vector<int> leftRightDifference(vector<int>& a) {
            int n = a.size();
            vector<int> left(n);
            vector<int> right(n);
            vector<int> b(n);
            int sum = 0;
            for (int i = 0; i < n; i++) {
                left[i] = sum;
                sum += a[i];
            }
            sum = 0;
            for (int i = n - 1; i >= 0; i--) {
                right[i] = sum;
                sum += a[i];
            }
            for (int i = 0; i < n; i++) {
                int diff = abs(left[i] - right[i]);
                b[i] = diff;
            }
            return b;
        }
    };
#time complexity:O(n)
#space complexity:O(n)
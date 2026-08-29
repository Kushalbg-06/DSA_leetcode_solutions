#724  Find Pivot Index
#solved using the prefix sum pattern
class Solution {
    public:
        int pivotIndex(vector<int>& a) {
            int n = a.size();
            vector<int> left(n);
            vector<int> right(n);
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
                if (left[i] == right[i]) {
                    return i;
                }
            }
            return -1;
        }
    };
#time complexity:O(n);
#space complexity:O(n);